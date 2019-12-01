#include "../header/generic.h"
#include "../header/painelUsuario.h"
#include "../header/usuarioDenuncia.h"
#include "../header/consultaPraia.h"

/**
*	@Desc: Renderiza o menu de Usuário.
**/
void painelUsuario(){

   char opcao;
   
   do{	
		printf("\t\t\t\t\tSafe Beach v%s \n",versao);
		printf("(1)Consultar praias\n");
		printf("(2)Denuncia\n");
		printf("(9)Deslogar\n");
		printf("(0)Encerrar aplicação\n\n");
		printf("Digite a opçao: ");
		scanf("%c",&opcao);
		bufferOut();
		switch(opcao){
    	case('1'):{
    		consultaPraia();
		
		
			break;
		}
    	case('2'):{
			denuncia();			 
			break;
		}
        case ('9'):{
        	clean();
			telaInicial();
			break;
		}
		case ('0'):{
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
	opcao = 0;	
   }while(opcao!='1' && opcao!='2' && opcao!='0');
}
