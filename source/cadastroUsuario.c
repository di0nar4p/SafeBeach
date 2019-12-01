#include "../header/generic.h"
#include "../header/usuario.h"
/**
*	@Desc: Renderiza a tela de cadastro do usuário.
**/
void cadastroUsuario(){
	
	//Variáveis		
	char email[100], senha[7], resposta;
	char nome[25], sobrenome [25];
	int  tamanhoString;
	
	//Verifica se o diretório existe;
	if(existFolder("dataBase/usuario",'0')==0){
		clean();
		printf("O diretório 'dataBase/ususario' não foi encontrado! \n");
		printf("Um novo diretório será criado! \n");
		mkdir("dataBase/usuario");
		pause();
	}
	clean();
	do{
		printf("\t\t\t\tCADASTRO DE USUÁRIO \n\n");
		printf("Digite um e-mail: ");
		gets(email);
		bufferOut();
		if(validarEmail(email)==1){
			printf("Formato de e-mail inválido! \n");
			pause();
		}

	}while(validarEmail(email)!=0);
	/*
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	bufferOut();
	*/		
	printf("\nDigite uma senha: ");
	scanf("%s", &senha);
	bufferOut();
	tamanhoString=(strlen(nome)) + strlen(strlwr(email));
	strncat(email,senha, (tamanhoString));
	FILE *usuarios;
	usuarios= fopen("dataBase/usuario/usuarios.txt","a");
	fprintf(usuarios,"\n");
	fprintf(usuarios,email);
	fclose(usuarios);
	printf("\n\t\t\tCadastro realizado com sucesso! \n \n");
	do{
		printf("Deseja voltar para a tela de Login? \n");
		printf("(1) SIM | (2) NÃO \n");
		printf("-> ");
		scanf("%c", &resposta);
	}while(resposta != '1' && resposta !='2');
	if(resposta=='2'){
		printf("\n Aplicação encerrada! \n");
		exit(0);
	}else{
		bufferOut();
		clean();
		telaInicial();
	}
}
