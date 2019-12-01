void denuncia(){
	int op;
	char data[10],textoDenuncia[300];
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
			printf("Digite a data da denúncia no formato dd/mm/aaaa: ");
				gets(data);
				bufferOut();
			printf("\nRelate o ocorrido:\n");
				gets(textoDenuncia);
				bufferOut();
				
			FILE *denuncia;	
			denuncia= fopen("database/denuncia/jaguaribe.txt", "a");
			fprintf(denuncia, "DATA DA DENÚNCIA: \n");
			fprintf(denuncia,data);
			fprintf(denuncia,"\n\nRELATO:\n");
			fprintf(denuncia, textoDenuncia);
			fprintf(denuncia, "\n");
			fprintf(denuncia, "---------------------------\n");
			bufferOut();
			fclose(denuncia);
			printf("\n\t\t\t\tDENÚNCIA REGISTRADA COM SUCESSO! \n\n");
			pause();
			break;
			}			
	}
}while (op!=0);
}
