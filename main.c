#include <stdio.h>

void cardapio (){
printf("\n\n====================CARDAPIO====================\n\n");
  
  printf("1-Cheeseburger - R$ 15.00 \n");
  printf("2-Pizza Margherita (tamanho médio) - R$ 30,00 \n");
  printf("3-Espaguete à Bolonhesa - R$ 25,00 \n");
  printf("4-Frango Grelhado com Legumes - R$ 35,00 \n");
  printf("5-Salada Caesar - R$ 20,00 \n");
  printf("6-Batata Frita - R$ 10,00 \n");
  printf("7-Suco Natural - R$ 8,00 \n");
  printf("8-Refrigerante (lata) - R$ 5,00 \n");
  printf("9-Água Mineral - R$ 3,00 \n\n");
       
  }

float calcularSubtotal(int codigo, int quantidade) {
    float subtotal = 0;
    
    switch (codigo) {
        case 1:
            subtotal = 15.00 * quantidade;
            break;
        case 2:
            subtotal = 30.00 * quantidade;
            break;
        case 3:
            subtotal = 25.00 * quantidade;
            break;
        case 4:
            subtotal = 35.00 * quantidade;
            break;
        case 5:
            subtotal = 20.00 * quantidade;
            break;
        case 6:
            subtotal = 10.00 * quantidade;
            break;
        case 7:
            subtotal = 8.00 * quantidade;
            break;
        case 8:
            subtotal = 5.00 * quantidade;
            break;
        case 9:
            subtotal = 3.00 * quantidade;
            break;
        default:
            printf("Código inválido!\n");
            break;
        
    }

    
    return subtotal;
}

int main() {
  int codigo, quantidade;
  float total=0, subtotal=0;
  char resposta;

  cardapio();
  
  do{
  printf("\nQual seu pedido: ");
      scanf(" %i", &codigo);

  printf("Qual a quantidade: ");
      scanf(" %i", &quantidade);

  subtotal += calcularSubtotal(codigo, quantidade);
     
     
  printf("Subtotal a ser pago: R$ %.2f\n", subtotal);

    
  printf("\nDeseja continuar? S ou N.\n ");
  scanf(" %c", &resposta);
    
  }while ( resposta == 'S' || resposta == 's');

  printf("\nTotal a pagar: R$ %.2f\n", subtotal);

  
    
  return 0;
}
