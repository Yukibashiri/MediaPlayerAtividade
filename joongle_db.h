#ifndef joongle_db
#define joongle_db

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // mudar linguagem do programa.
#include <string.h> // trabalhar ocm strings
#include <time.h> // utilizado para calcular o tempo de pesquisa.
#define caso "Joongle !"
#define aluno "Mario Damião Caparroz Remistico Junior"
#define professor "Alessandro Miranda Gonçalves"
#define LIMITE 15  // Numero de registros criados.
typedef struct{
        int identificador;
        char descricao[100];
        char cidade[40];
    } registro;
#endif // CASE_PO_DB_04_2016.
