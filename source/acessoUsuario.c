#include "../header/generic.h"
#include "../header/usuario.h"
#include "../header/painelAdministrador.h"
#include "../header/painelUsuario.h"


void acessoUsuario(){
	
	//Variáveis
	char email[100],senha[45], correto[45];
	int usuario, usuarioAdm, validAdm;
	
	//Escopo de acesso
	clean();
	do{
		printf("\t\t\t\tACESSO DE USUÁRIO \n\n");
		printf("E-mail: ");
		gets(email);
		bufferOut();
		if(validarEmail(email)==1){
			printf("Formato de e-mail inválido! \n"); 
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

	//Verifica se as informações digitadas são do ADM	
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
			printf("Não foi possível abrir o arquivo! ");
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
				* @ TODO => Deve-se resetar os valores contidos nas variáveis
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
