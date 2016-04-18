#include "joongle_db.h"

//APRESENTAÇÂO DO CASE//
void info(){
   system("cls");
   printf ("\n\nCASE: %s  \nAluno: %s \nProfessor: %s \n\n\n",caso,aluno,professor);  // Titulo do programa
}
//MONTA UMA BASE DE DADOS//
void db_example(registro *db){
    int i;

    /////////////IDENTIFICADORES//////////////////
        for (i=0; i<LIMITE; i++){
        (db+i)->identificador = i+1000;
    }
    /////////////DESCRICOES OU NOMES DOS HOTEIS//////////////////
    strcpy((db+0)->descricao, "RESORT RIO QUENTE");
    strcpy((db+1)->descricao, "JUMEIRA BEACH");
    strcpy((db+2)->descricao, "HOTEL PESTANA");
    strcpy((db+3)->descricao, "BELLAGIO ");
    strcpy((db+4)->descricao, "FAIRMONT LE CHÂTEAU FRONTENAC");
    strcpy((db+5)->descricao, "HOTEL SACHER");
    strcpy((db+6)->descricao, "MANDARIN ORIENTAL BANGKOK");
    strcpy((db+7)->descricao, "MONASTERO SANTA ROSA HOTEL & SPA");
    strcpy((db+8)->descricao, "MOUNT NELSON HOTEL");
    strcpy((db+9)->descricao, "ST. REGIS BAL HARBOUR RESORT");
    strcpy((db+10)->descricao, "THE BALMORAL");
    strcpy((db+11)->descricao, "THE CONNAUGHT");
    strcpy((db+12)->descricao, "THE DOLDER GRAND");
    strcpy((db+13)->descricao, "INN AT SHELBURNE FARMS");
    strcpy((db+14)->descricao, "JADE MOUNTAIN");
    //////////////CIDADES DOS HOTEIS///////////////////////////
    strcpy((db+0)->cidade, "CALDAS NOVAS");
    strcpy((db+1)->cidade, "DUBAI");
    strcpy((db+2)->cidade, "SAO LUIS");
    strcpy((db+3)->cidade, "BOSTON");
    strcpy((db+4)->cidade, "BUENOS AIRES");
    strcpy((db+5)->cidade, "DALLAS");
    strcpy((db+6)->cidade, "MOSCOVO");
    strcpy((db+7)->cidade, "MADRID");
    strcpy((db+8)->cidade, "ATLANTA");
    strcpy((db+9)->cidade, "TORONTO");
    strcpy((db+10)->cidade, "SYDNEY");
    strcpy((db+11)->cidade, "MUMBAI");
    strcpy((db+12)->cidade, "PHOENIX");
    strcpy((db+13)->cidade, "BARCELONA");
    strcpy((db+14)->cidade, "CALCUTA");
}
//PESQUISA PELO ID FORNECIDO PELO USUARIO//
void pesquisar_id(registro *db){
    int i,id;
    printf ("\n Informe o ID do Hotel (começando por 1000): ");
    scanf ("%d",&id);
    i = id - 1000;
        if (id <1000 || (db+i)->identificador != id){
            printf ("ID informado inexistente!\n");
        }
        else{
            printf ("\n        ID:  %d.\n Descrição:  %s.\n    Cidade:  %s.\n\n",(db+i)->identificador,(db+i)->descricao,(db+i)->cidade);
        }
}
//PESQUISAR POR PALAVRA CHAVE E FILTRAR O TIPO DE RESULTADO.//
void pesquisar_keyword(registro *db){
    int i,filtro,resultados_encontrados=0,aux;
    char pesquisa[60];
    time_t t_start, t_end;
    double tempo;
    do{
      printf ("\n Pesquisar por:  ");
      gets(pesquisa); // Recebe a string que sera comparada no registro
      strupr(pesquisa); // Transforma todos os caracteres da string em letras maiusculas.
    }while (pesquisa == NULL);
      printf ("Filtro: <1> Geral, <2> Descrição, <3> Cidade: "); // Opcao de filtro, utilizada para seleção de estrutura no switch-case.
      filtro = getch();
      printf ("\n\n\n\n");
      t_start = time(NULL); // Inicia o cronometro.
      switch(filtro){ // CADA CASE REPRESENTA UMA OPÇÃO DE FILTRO, LOGO A UNICA MUDANÇA É NA CONDIÇÃO DA DECISÃO DA BUSCA,
        case 50:
          for (i=0;i<LIMITE;i++){ //
            if (strstr((db+i)->descricao,pesquisa) != 0){ // SÓ IRA PROCURAR NAS DESCRIÇÕES
              printf ("\n        ID:  %d.\n Descrição:  %s.\n    Cidade:  %s.\n\n",(db+i)->identificador,(db+i)->descricao,(db+i)->cidade);
              resultados_encontrados++;
            }
          }
          break;
        case 51:
          for (i=0;i<LIMITE;i++){
            if (strstr((db+i)->cidade,pesquisa) != 0){ // SÓ IRA PROCURAR NAS CIDADES
              printf ("\n        ID:  %d.\n Descrição:  %s.\n    Cidade:  %s.\n\n",(db+i)->identificador,(db+i)->descricao,(db+i)->cidade);
              resultados_encontrados++;
            }
          }
          break;
        default:
          for (i=0;i<LIMITE;i++){ // PROCURA EM TODOS OS CAMPOS POSSIVEIS.
            if (strstr((db+i)->descricao,pesquisa) != 0 || strstr((db+i)->cidade,pesquisa) != 0){
              printf ("\n        ID:  %d.\n Descrição:  %s.\n    Cidade:  %s.\n\n",(db+i)->identificador,(db+i)->descricao,(db+i)->cidade);
              resultados_encontrados++;
            }
          }
          break;
      }
      t_end = time(NULL); // Para o cronometro
      tempo = difftime(t_end, t_start); // Arredonda para cima o obtido pelo cronometro.
      printf ("\n %d Resultados encontrados. Tempo de busca: %f segundos.\n",resultados_encontrados,tempo); // Mostra o resultado.
}
