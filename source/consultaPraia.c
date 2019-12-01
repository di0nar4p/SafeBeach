#include "../header/consultaPraia.h"
void consultaPraia(){

clean();
char consulta[200];
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
	printf("(0) Voltar\n\n");
	printf("Digite o número da praia: ");
	scanf("%d", &op);
	bufferOut();
	switch(op){
			case (1):{
			clean();
			printf("\t\t\t\tPraia de Jaguaribe\n\n");
			FILE *Praia;
			Praia= fopen("database/praias/jaguaribe/jaguaribe.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			
			fclose(Praia);
			FILE *denuncia;
			denuncia= fopen("database/denuncia/jaguaribe.txt", "r");
			printf("\n\t\t\tDenuncias relacionadas à praia de Jaguaribe:\n\n");
			while((fgets(consulta, 200, denuncia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			break;
			}
			case (2):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/armação/armação.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (3):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/penha/penha.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (4):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/pituba/pituba.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (5):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/ribeira/ribeira.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (6):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/aleluia/aleluia.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (7):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/amaralina/amaralina.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (8):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/boa viagem/boa viagem.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (9):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/bugari/bugari.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (10):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/inema/inema.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (11):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/itapua/itapua.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (12):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/jardim de alah/jardim de alah.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (13):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/ondina/ondina.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (14):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/patamares/patamares.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (15):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/piatã/piatã.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (16):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/placaford/placaford.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (17):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/stella mares/stella mares.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (18):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/villa matos/villa matos.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (19):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/corsário/corsário.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (20):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/farol da barra/farol da barra.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (21):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/flamengo/flamengo.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (22):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/jardim dos namorados/jardim dos namorados.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (23):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/mont serrat/mont serrat.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (24):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/porto da barra/porto da barra.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s\n", &consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (25):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/rio vermelho/rio vermelho.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (26):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/praia dos artistas/praia dos artistas.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (27):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/base naval/base naval.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (28):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/são tomé de paripe/são tomé de paripe.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (29):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/preguiça/preguiça.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			case (30):{
			clean();
			FILE *Praia;
			Praia= fopen("database/praias/gamboa/gamboa.txt", "r");
			while((fgets(consulta, 200, Praia))!= NULL){
			printf("%s", consulta);
			}
			pause();
			fclose(Praia);
			break;
			}
			
			op=0;
		}
	}while(op!=0);
}
