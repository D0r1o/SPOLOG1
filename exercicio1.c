#include <stdio.h>


int main() {

    int opcao;

    while(opcao !=4){
    printf("--- MENU---\n");
    printf("1.Cadastrar\n");
    printf("2.Editar\n");
    printf("3.Excluir\n");
    printf("4.Sair\n");
    printf("Escolha uma opção:");
    scanf("%d", &opcao);

    //Estrutura ESCOLHA..CASO
    switch(opcao){
        case 1:
        printf("Voce escolheu: CADATRA.\n");
        break;//Sem o break, ele executaria o editor logo em seguida

        case 2:
        printf("Voce escolheu: EDITAR.\n");
        break;

        case 3:
        printf("Voce escolheu: excluir.\n");
        break;
        
        case 4:
        printf("Você saiu");
        break;
    } 

 }



return 0;

}
