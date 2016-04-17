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
    strcpy((db+0)->descricao, "Resort Rio Quente");
    strcpy((db+1)->descricao, "Jumeira Beach");
    strcpy((db+2)->descricao, "Hotel Pestana");
    strcpy((db+3)->descricao, "Bellagio ");
    strcpy((db+4)->descricao, "Fairmont Le Château Frontenac");
    strcpy((db+5)->descricao, "Hotel Sacher");
    strcpy((db+6)->descricao, "Mandarin Oriental Bangkok");
    strcpy((db+7)->descricao, "Monastero Santa Rosa Hotel & Spa");
    strcpy((db+8)->descricao, "Mount Nelson Hotel");
    strcpy((db+9)->descricao, "St. Regis Bal Harbour Resort");
    strcpy((db+10)->descricao, "The Balmoral");
    strcpy((db+11)->descricao, "The Connaught");
    strcpy((db+12)->descricao, "The Dolder Grand");
    strcpy((db+13)->descricao, "Inn at Shelburne Farms");
    strcpy((db+14)->descricao, "Jade Mountain");
    //////////////CIDADES DOS HOTEIS///////////////////////////
    strcpy((db+0)->cidade, "Caldas Novas");
    strcpy((db+1)->cidade, "Dubai");
    strcpy((db+2)->cidade, "Sao Luis");
    strcpy((db+3)->cidade, "Boston");
    strcpy((db+4)->cidade, "Buenos Aires");
    strcpy((db+5)->cidade, "Dallas");
    strcpy((db+6)->cidade, "Moscovo");
    strcpy((db+7)->cidade, "Madrid");
    strcpy((db+8)->cidade, "Atlanta");
    strcpy((db+9)->cidade, "Toronto");
    strcpy((db+10)->cidade, "Sydney");
    strcpy((db+11)->cidade, "Mumbai");
    strcpy((db+12)->cidade, "Phoenix");
    strcpy((db+13)->cidade, "Barcelona");
    strcpy((db+14)->cidade, "Calcuta");
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
            printf ("\n ID: %d.\n Descrição:  %s.\n Cidade:  %s.\n\n\n",(db+i)->identificador,(db+i)->descricao,(db+i)->cidade);
        }
}
//PESQUISAR POR PALAVRA CHAVE E FILTRAR O TIPO DE RESULTADO.//
void pesquisar_keyword(registro *db){
    int i,filtro,resultados_encontrados=0,aux;
    char pesquisa[60];
    time_t t_start, t_end;
    int tempo,seg=0,min=0,hor=0;
    do{
      printf ("\n Pesquisar por:  ");
      gets(pesquisa);
    }while (pesquisa == NULL);
      printf ("Filtro: <1> Geral, <2> Descrição, <3> Cidade: "); // Opcao de filtro, utilizada para seleção de estrutura no switch-case.
      filtro = getch();
      printf ("\n\n\n\n");
      t_start = time(NULL); // Inicia o cronometro.
      //for (aux=0;aux<667;aux++){      // Utilizado para fazer o programa rodar como se tivesse 10mil registros.

      switch(filtro){ // CADA CASE REPRESENTA UMA OPÇÃO DE FILTRO, LOGO A UNICA MUDANÇA É NA CONDIÇÃO DA DECISÃO DA BUSCA,
        case 50:
          for (i=0;i<LIMITE;i++){ //
            if (strstr((db+i)->descricao,pesquisa) != 0){ // SÓ IRA PROCURAR NAS DESCRIÇÕES
              printf ("\n ID: %d.\n Descrição:  %s.\n Cidade:  %s.\n\n",(db+i)->identificador,(db+i)->descricao,(db+i)->cidade);
              resultados_encontrados++;
            }
          }
          break;
        case 51:
          for (i=0;i<LIMITE;i++){
            if (strstr((db+i)->cidade,pesquisa) != 0){ // SÓ IRA PROCURAR NAS CIDADES
              printf ("\n ID: %d.\n Descrição:  %s.\n Cidade:  %s.\n\n",(db+i)->identificador,(db+i)->descricao,(db+i)->cidade);
              resultados_encontrados++;
            }
          }
          break;
        default:
          for (i=0;i<LIMITE;i++){ // PROCURA EM TODOS OS CAMPOS POSSIVEIS.
            if (strstr((db+i)->descricao,pesquisa) != 0 || strstr((db+i)->cidade,pesquisa) != 0){
              printf ("\n ID: %d.\n Descrição:  %s.\n Cidade:  %s.\n\n",(db+i)->identificador,(db+i)->descricao,(db+i)->cidade);
              resultados_encontrados++;
            }
          }
          break;
      }
      //} // FECHA LAÇO DOS 1000 Registros
      t_end = time(NULL); // Para o cronometro
      tempo = ceil(difftime(t_end, t_start)); // Arredonda para cima o obtido pelo cronometro.
      if (tempo >59){                   //Tempo esta em segundos, essa estrutura transforma em horas:minutos:segundos.
        min = tempo / 60;
        seg = tempo % 60;
      }
      else if (min > 59){
         hor = min / 60;
         min = min % 60;
      }
      else{
            seg = tempo;
        }

    printf ("\n %d Resultados encontrados. Tempo de busca: %02d:%02d:%02ds\n",resultados_encontrados,hor,min,seg); // Mostra o resultado.
}
