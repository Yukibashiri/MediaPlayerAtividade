#include "joongle_db.h"
#include "procedures.c"

// FUNÇÃO PRINCIPAL//
void main (void)
{
    system("COLOR F0"); // Muda o background para brancco e letras para preto.
    setlocale(LC_ALL,"Portuguese"); // permite acentuação.
    registro Reg_Hoteis[LIMITE]; // cria a estrutura para registrar os hoteis.
    db_example(&Reg_Hoteis);   // chama o procedimento que faz a população da estrutura.
    int decisao;          // Variavel utilizada para guardar o valor com a opção do menu informado pelo usuario.
    do{ 
        printf ("\n           JOONGLE! SEARCHER     \n");
        printf (" ____________________________________\n");
        printf ("|                                    | \n");
        printf ("|   [1] BUSCA POR IDENTIFICADOR      |\n");
        printf ("|   [2] BUSCA POR PALAVRA CHAVE      |\n");
        printf ("|   [3] INFO                         |\n");
        printf ("|   [ESC] ENCERRAR PROGRAMA          |\n|____________________________________|\nPressione a tecla no teclado referente ao numero do menu.");
        decisao = getch();
        system("cls");
        switch(decisao){
            case 49:                // Procedimento de busca por identificador
                pesquisar_id(&Reg_Hoteis);
                break;
            case 50:                 // Procedimento de busca por palvra chave
                pesquisar_keyword(&Reg_Hoteis);
                break;
            case 51:                // Procedimento que mostra as informações sobre o case.
                info();             
                break;
            case 0x1b:              // Encerra o loop e termina o programa
                system("EXIT");
                break;
        }
        system("PAUSE");          // "congela" o programa
        system("cls");           // limpa tela
    }while (decisao != 0x1b);   // condição para que o loop termine.
}
