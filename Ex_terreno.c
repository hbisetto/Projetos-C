#include <stdio.h>


int main()
{
   double larg, comp, metro, area, preco;

   printf("Digite a largura do terreno:");
   scanf("\n%lf", &larg);
   printf("Digite o comprimento do terreno:");
   scanf("\n%lf", &comp);
   printf("Digite o valor do metro quadrado:");
   scanf("\n%lf", &metro);

   area = larg*comp;
   preco = area*metro;

   printf("\nArea do terreno = %.2lf", area );
   printf("\nPreco do terreno = %.2lf", preco);



    return 0;
}
