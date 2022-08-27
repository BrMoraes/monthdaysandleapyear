#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
   int mes;
   int ano;
   bool bissexto = false;

   printf("Digite um mes do ano(ex: Janeiro = 1, Fevereiro = 2...):");
   scanf("%d", &mes);
   printf("Digite um ano de 0 D.C. a 2022:");
   scanf("%d", &ano);

   if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
   {
      bissexto = true;
   }

   switch (mes)
   {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:
      printf("Este mes teve 31 dias");
      break;
   case 2:
      if (bissexto == true)
      {
         printf("Este mes teve 29 dias");
      }
      else
      {
         printf("Este mes teve 28 dias");
      }
      break;
   case 4:
   case 6:
   case 9:
   case 11:
      printf("Este mes teve 30 dias");
      break;
   }

   return 0;
}