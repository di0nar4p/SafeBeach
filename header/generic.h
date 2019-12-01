#ifndef __GENERIC_H__
#define __GENERIC_H__
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <fcntl.h>
#include <dirent.h>
#include "../source/generic.c"
/**
*	@Desc: Variáveis definidas.
**/
#define false  0
#define true   1

/**
*	@Desc: Variáveis globais do sistema.
**/
char emailAdm[20] = "adm@safebeach.com";
char senhaAdm[20] = "123456";
const char versao[20] = "2.3.091117 20:39";

/**
*  @Desc: limpa a variável de captura de valores.
**/
void bufferOut();

/**
*  @Desc: limpar a tela.
**/
void clean();

/**
*  @Desc: limpar a tela.
**/
void pause();

/**
*  @Desc: validar e-mail
**/
int validarEmail(char email[100]);

/**
*  @Desc: converter para string para maiúsculo
**/
void stringToUpper(char string[100]);

/**
*  @Desc: Criar pastas
**/
void createFolder(char nomePasta[100]);

/**
*  @Desc: Verifica se o diretório existe
**/
int existFolder(char nomePasta[200], char tipoPasta);

//Adicionar mais aqui!!!
#endif
