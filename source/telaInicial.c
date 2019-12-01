#include "../header/telaInicial.h"
#include "../header/WillyFree.h"
#include "../header/usuario.h"
#include "windows.h"

/**
*	@Desc: Renderiza o menu de inicial.
**/

void telaInicial(){

   char opcao;
   do{
   		chamarFreeWilly();
		printf("\n\t\t\t\t\t\tSafe Beach v %s \n",versao);
		printf("(1)Cadastrar usuário\n");
		printf("(2)Fazer login\n");
		printf("(0)Sair\n\n");
		printf("Digite a opçao: ");
		scanf("%c",&opcao);
		if((opcao!='1') && (opcao!='2') && (opcao!='0')){
			printf("\nOpção inválida!\n\n");
			pause();
		}
		bufferOut();
		switch(opcao){
    	case('1'):{
			cadastroUsuario();
			break;
		}
    	case('2'):{
    		acessoUsuario();
            break;
		}
        case ('0'):{
			printf("\n Aplicação encerrada! \n");
			exit(0);
			break;
		}
		
	}
	clean();	
   }while(opcao!='1' && opcao!='2' && opcao!='0');
}
