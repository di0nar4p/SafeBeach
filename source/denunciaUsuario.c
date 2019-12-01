#include "../header/generic.h"
#include "../header/denunciaUsuario.h"
/**
	@Desc: Função de denuncia, onde o usuário relato o ocorrido e a localização
**/

void denuncia(){
	
	char textoDenuncia[145], regiaoDenunciada[34],resposta;
	FILE* denuncia;
	
	if((denuncia = fopen("dataBase//denuncia//denuncia.txt", "a"))==NULL ) {
		printf("Não foi possível abrir o arquivo! ");
	}else{
		// Printf inicial da função;
		printf("Digite o endereço da praia: \n");
		
		// Captura dados do usuário; 
		fgets(regiaoDenunciada, STRMAXENDERECO, denuncia);
		
		fprintf(denuncia, "Localização: ");
		fprintf(denuncia, regiaoDenunciada);
		fprintf(denuncia, "\n");

		// Relato do usuário;
		
		printf("Relate o ocorrido da denúncia com o horário do acontecimento: \n");
		fgets(textoDenuncia, STRMAXDENUNCIA, denuncia);
		fprintf(denuncia, textoDenuncia);
		fprintf(denuncia, "\n");
		fprintf(denuncia, "-------------------\n");
		// fecha o arquivo;
		fclose(denuncia);
		clean();
		printf("\t\t\t\t\tDENÚNCIA REGISTRADA COM SUCESSO! \n");
	}
		do{
			printf("\nDeseja voltar para a tela inicial? \n");
			printf("1 - SIM | 2 - NÃO \n");
			scanf("%c", &resposta);
		}while(resposta != '1' && resposta !='2');
	
		if(resposta=='2'){
			printf("\n Aplicação encerrada! \n");
			exit(0);
		}			
	}
