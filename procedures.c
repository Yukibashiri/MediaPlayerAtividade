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
    strcpy((db+15)->descricao, "UMAID BHAWAN PALACE JODHPUR");
    strcpy((db+16)->descricao, "SHINTA MANI RESORT");
    strcpy((db+17)->descricao, "BELLEVUE SYRENE");
    strcpy((db+18)->descricao, "HANOI LA SIESTA HOTEL & SPA");
    strcpy((db+19)->descricao, "ACHTIS HOTEL");
    strcpy((db+20)->descricao, "BELMOND LE MANOIR AUX QUAT'SAISONS");
    strcpy((db+21)->descricao, "MIRIHI ISLAND RESORT");
    strcpy((db+22)->descricao, "BUCUTI & TARA BEACH RESORT ARUBA");
    strcpy((db+23)->descricao, "CALABASH LUXURY BOUTIQUE HOTEL & SPA");
    strcpy((db+24)->descricao, "HOTEL RITTA HÖPPNER");
    strcpy((db+25)->descricao, "GILI LANKANFUSHI MALDIVES");
    strcpy((db+26)->descricao, "CANAVES OIA HOTEL");
    strcpy((db+27)->descricao, "ORANGE COUNTY RESORTS KABINI");
    strcpy((db+28)->descricao, "HOTEL ESTALAGEM ST HUBERTUS");
    strcpy((db+29)->descricao, "THE MILESTONE HOTEL");
    strcpy((db+30)->descricao, "TOKORIKI ISLAND RESORT");
    strcpy((db+30)->descricao, "RESORT RIO QUENTE");
    strcpy((db+31)->descricao, "JUMEIRA BEACH");
    strcpy((db+32)->descricao, "HOTEL PESTANA");
    strcpy((db+33)->descricao, "HOTEL PRAHRAN");
    strcpy((db+34)->descricao, "HOTEL HÜTTENPALAST");
    strcpy((db+35)->descricao, "HAYEMA HEERD");
    strcpy((db+36)->descricao, "HOTEL SUN CRUISE");
    strcpy((db+37)->descricao, "APARTHOTEL CITY 5");
    strcpy((db+38)->descricao, "HOTEL BURG OBERRANNA");
    strcpy((db+39)->descricao, "IBIS LONDON BLACKFRIARS");
    strcpy((db+40)->descricao, "HOTEL EDISON TIMES SQUARE");
    strcpy((db+41)->descricao, "LISBON CITY HOTEL");
    strcpy((db+42)->descricao, "LA CORBIERE RADIO TOWER");
    strcpy((db+43)->descricao, "SALA SILVERMINE");
    strcpy((db+44)->descricao, "HOTEL UTTER INN");
    strcpy((db+45)->descricao, "HOTEL KHAN");
    strcpy((db+46)->descricao, "MOTEL TARGARYEN");
    strcpy((db+47)->descricao, "POUSADA BARATHEON");
    strcpy((db+48)->descricao, "INN STARK");
    strcpy((db+49)->descricao, "HOTEL SANSA");

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
    strcpy((db+15)->cidade, "JODHPUR");
    strcpy((db+16)->cidade, "SIEM REAP");
    strcpy((db+17)->cidade, "SORRENTO");
    strcpy((db+18)->cidade, "HANÓI,");
    strcpy((db+19)->cidade, "AFITOS,");
    strcpy((db+20)->cidade, "GREAT MILTON,");
    strcpy((db+21)->cidade, "MIRIHI");
    strcpy((db+22)->cidade, "PALM/EAGLE BEACH");
    strcpy((db+23)->cidade, "LANCE AUX EPINES");
    strcpy((db+24)->cidade, "GRAMADO");
    strcpy((db+25)->cidade, "LANKANFUSHI");
    strcpy((db+26)->cidade, "OIA");
    strcpy((db+27)->cidade, "NAGARHOLE NATIONAL PARK");
    strcpy((db+28)->cidade, "GRAMADO");
    strcpy((db+29)->cidade, "LONDRES");
    strcpy((db+30)->cidade, "TOKORIKI ISLAND");
    strcpy((db+30)->cidade, "CALDAS NOVAS");
    strcpy((db+31)->cidade, "DUBAI");
    strcpy((db+32)->cidade, "SÃO LUIS");
    strcpy((db+33)->cidade, "MELBOURNE");
    strcpy((db+34)->cidade, "BERLIM");
    strcpy((db+35)->cidade, "OLDEHOVE");
    strcpy((db+36)->cidade, "DONGHAE");
    strcpy((db+37)->cidade, "PRAGA");
    strcpy((db+38)->cidade, "VALE WACHAU");
    strcpy((db+39)->cidade, "LONDRES");
    strcpy((db+40)->cidade, "NOVA YORK");
    strcpy((db+41)->cidade, "LISBOA");
    strcpy((db+42)->cidade, "JERSEY");
    strcpy((db+43)->cidade, "BARCELONA");
    strcpy((db+44)->cidade, "CALCUTA");
    strcpy((db+45)->cidade, "NORTH WESTEROS");
    strcpy((db+46)->cidade, "SLAVE BAY");
    strcpy((db+47)->cidade, "LHAZAR");
    strcpy((db+48)->cidade, "QARTH");
    strcpy((db+49)->cidade, "KING'S LAND");

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
    }while (pesquisa == NULL);
    strupr(pesquisa); // Transforma todos os caracteres da string em letras maiusculas.
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
    printf ("\n %d Resultado(s) encontrado(s). Tempo de busca: %f segundo(s).\n",resultados_encontrados,tempo); // Mostra o resultado.
}
