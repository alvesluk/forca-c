#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int menu();
int cadastro();
int creditos();

enum modo_de_jogo{
	SAIR,
	JOGAR,
	RANKING,
	CADASTRAR,
	CREDITOS
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	menu();
	return EXIT_SUCCESS;
}

int menu(){
	enum modo_de_jogo opcao;
	
	printf(
	" +----------------------------------------------------------------------+\n"
	" |   o__ __o__/_                                                        |\n"                                                 
	" |  <|    v                                                             |\n"                                                  
	" |  < >                                                                 |\n"                                                         
	" |   |              o__ __o    \\o__ __o       __o__     o__ __o/        |\n" 
	" |   o__/_         /v     v\\    |     |>     />  \\     /v     |         |\n"  
	" |   |            />       <\\  / \\   < >   o/         />     / \\        |\n" 
	" |  <o>           \\         /  \\o/        <|          \\      \\o/        |\n" 
	" |   |             o       o    |          \\\\          o      |         |\n"  
	" |  / \\            <\\__ __/>   / \\          _\\o__</    <\\__  / \\        |\n"
	" +----------------------------------------------------------------------+\n" 
	"                               1 - Jogar\n"
	"                            2 - Ver Ranking\n"
	"                         3 - Cadastrar Palavras\n" 
	"                             4 - Créditos\n" 
	"                               0 - Sair\n"
	"\nOpção: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		
		case SAIR:
			printf("Sucesso ao sair!");
			return EXIT_SUCCESS;
		break;
		
		case JOGAR:
		break;
		
		case RANKING:
		break;
		
		case CADASTRAR:
			cadastro();
		break;
		
		case CREDITOS:
			creditos();
		break;
		
		default:
			printf("Opção inválida!");
		break;	
	}
	return EXIT_SUCCESS;
}

int cadastro(){
	FILE * arquivo = NULL;
	char texto[47];
	
	arquivo = fopen("exemplo.bin", "ab+");
	scanf(" %[^\t\n]47s", &texto);
	fprintf(arquivo, texto);
	fprintf(arquivo, "\n");

	fflush(arquivo);
	printf("Palavra cadastrada: %s",texto);
	
	fclose(arquivo);
	
	return EXIT_SUCCESS;
}

int creditos(){
printf(
	"	  	   	  o--------------------o\n"
	"                          |     Jose Lopes     |\n"
	"                          |  Lael Alburquerque |\n"
	"                          |     Lucas Alves    |\n"
	"		          o--------------------o\n" 
	);
}

