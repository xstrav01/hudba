#pragma warning(disable:4996)//proti warningom
#include "pch.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct t_alba
{
    char interpret[30];
    char nazov[30];
    int rok;
    struct t_alba* dalsi;
};

void show(char pismeno = NULL);
void add(const char * interpret, const char * nazov, int rok);
int poradie(char arr[50], char arr2[50]);