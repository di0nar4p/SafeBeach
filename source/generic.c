#include "../header/generic.h"

/**
*  @Desc: limpa a variável de captura de valores.
**/
void bufferOut(){
	fflush(stdin);
}

/**
*  @Desc: limpar a tela.
**/
void clean(){
	system("cls");
}

/**
*  @Desc: limpar a tela.
**/
void pause(){
	system("pause");
}

/**
*  @Desc: validar e-mail
**/
int validarEmail(char email[100]){
	
	//Variáveis de controle
	int indice, count=0;
	
	//Percorre o e-mail e valida o mesmo.
	for(indice=0; indice < strlen(email); indice++){
		if(email[0] != '@' && email[indice]=='@'){
			count++;
		}
	}
	
	//Devolve verdadeiro ou falso: 0 - verdadeiro; 1 - falso.
	if(count==1){
		return 0;
	}else{
		return 1;
	}
}

/**
*  @Desc: Criar pastas
**/
void createFolder(char nomePasta[100]){
	mkdir(nomePasta);
}

/**
*  @Desc: Verifica se o diretório existe
**/
int existFolder(char nomePasta[200], char tipoPasta){
	
	DIR *exist;
	char message[900];
	exist = opendir(nomePasta);
	
	if(exist==NULL){
		if(tipoPasta == 'S'){
			clean();
			printf("Falha ao iniciar o sistema! O diretorio '%s' não foi encontrado! \n",nomePasta);
			pause();
			exit(0);
		}else{
			printf("O diretorio '%s' não foi encontrado! \n ",nomePasta);
			return 0;
		}
	}
}
