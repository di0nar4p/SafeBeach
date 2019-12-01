#include "../header/painelAdministrador.h"
#include "../header/registroPraia.h"
#include "../header/telaInicial.h"
/**
*	@Desc: Renderiza o menu de Adminstrador.
**/

int painelAdministrador(){

   char opcao, nome_praia[45], residuo[45], classe[45];
   do{
		printf("\t\t\t\t\tSafe Beach v %s \n",versao);
		printf("(1)Atualizar dados\n");
		printf("(9)Deslogar\n");
		printf("(0)Encerrar aplicação\n\n");
		printf("Digite a opçao: ");
		scanf("%c",&opcao);
		bufferOut();		
		switch(opcao){
    	case('1'):{
    		inserirDados();
			
			break;
		}
        case ('9'):{
			clean();
			telaInicial();
			break;
		}
		case ('0'):{
			printf("Aplicação encerrada!");
			clean();
			exit(0);
			break;
		}
		default:{
			printf("\n Opção invalida! \n");
			pause();
			break;
		}
	}
	clean();
	opcao = '0';	
   }while(opcao!='1' && opcao!='0');
}
