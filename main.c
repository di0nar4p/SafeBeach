/**
*	@Desc: Importação das funções genéricas
**/
#include "header/generic.h"
#include "header/usuario.h"
#include "header/telaInicial.h"

/**
*	@Desc: Importação das visões
**/

void main(){
	/*Define a cor do texto para verde*/
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	
	/* Define por padrão a altura e a largura do MS-DOS */	
	system("mode con:cols=80 lines=50");

	/* Define o titulo do software */
	system("title SAFE BEACH");

	/* Permite a entrada de caracteres especiais */
	setlocale(LC_ALL, "portuguese");

 	/**
	*	@Desc:  Verifica se as pastas do sistema existem, caso contrário
	*			devolverá um erro na tela.
	**/
	existFolder("source",'S');
	existFolder("header",'S');
	existFolder("resource",'S');

 	/**
	*	@Desc:  Verifica se a pasta do banco de dados existe, caso contrário
	*			ela será criada.-
	**/
	if(existFolder("dataBase",'O') == 0){
		printf("Criando diretório \n");
		createFolder("dataBase");
		pause();
		system("cls");
	}
	
 	/**
	*	@Desc: Renderiza a tela inicial.
	**/
	telaInicial();
}
