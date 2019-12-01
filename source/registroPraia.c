#include "../header/painelAdministrador.h"
void inserirDados(){

clean();
char residuo[45], classe[45], data[10];
int op;
do{
	clean();
	printf("\t\t\t\tSelecione a praia\n");
	printf("(1) Jaguaribe\n");
	printf("(2) Armação\n");
	printf("(3) Penha\n");
	printf("(4) Pituba\n");
	printf("(5) Ribeira\n");
	printf("(6) Aleluia\n");
	printf("(7) Amaralina\n");
	printf("(8) Boa viagem\n");
	printf("(9) Bugari\n");
	printf("(10) Inema\n");
	printf("(11) Itapuã\n");
	printf("(12) Jardim de alah\n");
	printf("(13) Ondina\n");
	printf("(14) Patamares\n");
	printf("(15) Piatã\n");
	printf("(16) Placaford\n");
	printf("(17) Stella mares\n");
	printf("(18) Villa matos\n");
	printf("(19) Corsário\n");
	printf("(20) Farol da barra\n");
	printf("(21) Flamengo\n");
	printf("(22) Jardim dos namorados\n");
	printf("(23) Mont serrat\n");
	printf("(24) Porto da barra\n");
	printf("(25) Rio vermelho\n");
	printf("(26) Praia dos artistas\n");
	printf("(27) Base naval\n");
	printf("(28) São tomé de paripe\n");
	printf("(29) Preguiça\n");
	printf("(30) Gamboa\n");
	printf("\n(0) Voltar\n\n");
	printf("Digite o número da praia: ");
	scanf("%d", &op);
	bufferOut();
	switch(op){
			case (1):{
			clean();
			printf("\t\t\t\tPraia de Jaguaribe\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/jaguaribe/jaguaribe.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(2):{
			clean();
			printf("\t\t\t\tPraia da Armação\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/armação/armação.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(3):{
			clean();
			printf("\t\t\t\tPraia da Penha\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/penha/penha.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(4):{
			clean();
			printf("\t\t\t\tPraia da Pituba\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/pituba/pituba.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(5):{
			clean();
			printf("\t\t\t\tPraia da Ribeira\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/ribeira/ribeira.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(6):{
			clean();
			printf("\t\t\t\tPraia de Aleluia\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/aleluia/aleluia.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(7):{
			clean();
			printf("\t\t\t\tPraia de Amaralina\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/amaralina/amaralina.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(8):{
			clean();
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/boa viagem/boa viagem.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(9):{
			clean();
			printf("\t\t\t\tPraia de Bugari\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/bugari/bugari.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(10):{
			clean();
			printf("\t\t\t\tPraia de Inema\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/inema/inema.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(11):{
			clean();
			printf("\t\t\t\tPraia de Itapuã\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/itapua/itapua.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(12):{
			clean();
			printf("\t\t\t\tPraia de Jardim de Alah\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/jardim de alah/jardim de alah.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(13):{
			clean();
			printf("\t\t\t\tPraia de Ondina\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/ondina/ondina.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(14):{
			clean();
			printf("\t\t\t\tPraia de Patamares\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/patamares/patamares.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(15):{
			clean();
			printf("\t\t\t\tPraia de Piatã\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/piatã/piatã.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(16):{
			clean();
			printf("\t\t\t\tPraia de Placaford\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/placaford/placaford.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(17):{
			clean();
			printf("\t\t\t\tPraia de Stella Mares\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/stella mares/stella mares.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(18):{
			clean();
			printf("\t\t\t\tPraia de Villa Matos\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/villa matos/villa matos.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(19):{
			clean();
			printf("\t\t\t\tPraia do Corsário\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/corsário/corsário.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(20):{
			clean();
			printf("\t\t\t\tPraia do Farol da Barra\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/farol da barra/farol da barra.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(21):{
			clean();
			printf("\t\t\t\tPraia do Flamengo\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/flamengo/flamengo.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(22):{
			clean();
			printf("\t\t\t\tPraia do Jardim dos Namorados\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/jardim dos namorados/jardim dos namorados.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(23):{
			clean();
			printf("\t\t\t\tPraia do Mont Serrat\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/mont serrat/mont serrat.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(24):{
			clean();
			printf("\t\t\t\tPraia do Porto da Barra\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/porto da barra/porto da barra.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(25):{
			clean();
			printf("\t\t\t\tPraia do Rio Vermelho\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/rio vermelho/rio vermelho.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(26):{
			clean();
			printf("\t\t\t\tPraia dos Artistas\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/praia dos artistas/praia dos artistas.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(27):{
			clean();
			printf("\t\t\t\tPraia de Base Naval\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/base naval/base naval.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(28):{
			clean();
			printf("\t\t\t\tPraia de São Tomé de Paripe\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/são tomé de paripe/são tomé de paripe.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case(29):{
			clean();
			printf("\t\t\t\tPraia da Preguiça\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/preguiça/preguiça.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case (30):{
			clean();
			printf("\t\t\t\tPraia da Gamboa\n\n");
			printf("Digite a data do registro no formato dd/mm/aaaa: ");
			gets(data);
			bufferOut();
			printf("\nDigite o tipo de resíduo: ");
			gets(residuo);
			bufferOut();
			printf("\nDigite a classificação da praia: ");
			gets(classe);
			bufferOut();
			
			FILE *Praia;
			Praia= fopen("database/praias/gamboa/gamboa.txt", "a");
			fprintf(Praia, "DATA DO REGISTRO\n");
			fprintf(Praia, data);
			fprintf(Praia, "\n\nRESIDUO ENCONTRADO\n");
			fprintf(Praia,residuo);
			fprintf(Praia,"\n\nCLASSIFICAÇÃO DA PRAIA\n");
			fprintf(Praia, classe);
			fprintf(Praia, "\n-------------\n");
			fclose(Praia);
			printf("\n\t\t\t\tRegistro adicionado com sucesso!\n\n");
			pause();
			break;
			}
			case (0):{
				clean();
				painelAdministrador();
				break;
			}
			
		}
	}while(op!=0);

}
