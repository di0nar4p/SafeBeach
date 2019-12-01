#include "../header/generic.h"
#include "../header/denunciaUsuario.h"
/**
	@Desc: Fun��o de denuncia, onde o usu�rio relato o ocorrido e a localiza��o
**/

void denuncia(){
	
	char textoDenuncia[145], regiaoDenunciada[34],resposta;
	FILE* denuncia;
	
	if((denuncia = fopen("dataBase//denuncia//denuncia.txt", "a"))==NULL ) {
		printf("N�o foi poss�vel abrir o arquivo! ");
	}else{
		// Printf inicial da fun��o;
		printf("Digite o endere�o da praia: \n");
		
		// Captura dados do usu�rio; 
		fgets(regiaoDenunciada, STRMAXENDERECO, denuncia);
		
		fprintf(denuncia, "Localiza��o: ");
		fprintf(denuncia, regiaoDenunciada);
		fprintf(denuncia, "\n");

		// Relato do usu�rio;
		
		printf("Relate o ocorrido da den�ncia com o hor�rio do acontecimento: \n");
		fgets(textoDenuncia, STRMAXDENUNCIA, denuncia);
		fprintf(denuncia, textoDenuncia);
		fprintf(denuncia, "\n");
		fprintf(denuncia, "-------------------\n");
		// fecha o arquivo;
		fclose(denuncia);
		clean();
		printf("\t\t\t\t\tDEN�NCIA REGISTRADA COM SUCESSO! \n");
	}
		do{
			printf("\nDeseja voltar para a tela inicial? \n");
			printf("1 - SIM | 2 - N�O \n");
			scanf("%c", &resposta);
		}while(resposta != '1' && resposta !='2');
	
		if(resposta=='2'){
			printf("\n Aplica��o encerrada! \n");
			exit(0);
		}			
	}
