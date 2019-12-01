/**
*	@Desc: Importa��o das fun��es gen�ricas
**/
#include "header/generic.h"
#include "header/usuario.h"
#include "header/telaInicial.h"

/**
*	@Desc: Importa��o das vis�es
**/

void main(){
	/*Define a cor do texto para verde*/
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	
	/* Define por padr�o a altura e a largura do MS-DOS */	
	system("mode con:cols=80 lines=50");

	/* Define o titulo do software */
	system("title SAFE BEACH");

	/* Permite a entrada de caracteres especiais */
	setlocale(LC_ALL, "portuguese");

 	/**
	*	@Desc:  Verifica se as pastas do sistema existem, caso contr�rio
	*			devolver� um erro na tela.
	**/
	existFolder("source",'S');
	existFolder("header",'S');
	existFolder("resource",'S');

 	/**
	*	@Desc:  Verifica se a pasta do banco de dados existe, caso contr�rio
	*			ela ser� criada.-
	**/
	if(existFolder("dataBase",'O') == 0){
		printf("Criando diret�rio \n");
		createFolder("dataBase");
		pause();
		system("cls");
	}
	
 	/**
	*	@Desc: Renderiza a tela inicial.
	**/
	telaInicial();
}
