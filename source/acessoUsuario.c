#include "../header/generic.h"
#include "../header/usuario.h"
#include "../header/painelAdministrador.h"
#include "../header/painelUsuario.h"


void acessoUsuario(){
	
	//Vari�veis
	char email[100],senha[45], correto[45];
	int usuario, usuarioAdm, validAdm;
	
	//Escopo de acesso
	clean();
	do{
		printf("\t\t\t\tACESSO DE USU�RIO \n\n");
		printf("E-mail: ");
		gets(email);
		bufferOut();
		if(validarEmail(email)==1){
			printf("Formato de e-mail inv�lido! \n"); 
			pause();
			clean();
		}
		
	}while(validarEmail(email)!=0);
	printf("\nSenha: ");
	scanf("%s",&senha);
	bufferOut();	
	usuario=strlen(email);	
	usuario+= strlen(senha) ;
	strncat(email,senha, (usuario));

	//Verifica se as informa��es digitadas s�o do ADM	
	usuarioAdm = strlen(emailAdm);
	usuarioAdm += strlen(senhaAdm);
	strncat(emailAdm,senhaAdm, (usuarioAdm));	
	validAdm = strcmp(emailAdm, email);
	
	if( validAdm == 0){
		clean();
		painelAdministrador();
	}else{
		FILE *liberado;
		if((liberado= fopen("dataBase\\usuario\\usuarios.txt","r")) == NULL){
			printf("N�o foi poss�vel abrir o arquivo! ");
			pause();
		}else{
			while((fscanf(liberado, "%s \n", &correto))!= EOF){
				usuario= strcmp(email,correto);
				if(usuario == 0){
					break;
				}else{
					continue;
				}
			}
			if(usuario == 0){
   				clean();
				fclose(liberado);
				painelUsuario();
			}else{
				clean();
				printf("\nLogin ou senha incorretos!\n\n");
				/* 
				* @ TODO => Deve-se resetar os valores contidos nas vari�veis
				*			USUARIO e SENHA
				*/
				fclose(liberado);
				printf("Tente novamente\n\n");
				pause();
				acessoUsuario();
			}
		}
	}
}
