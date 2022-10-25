/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int cont,vet[5];
   
   printf("Armazenamento de vetores e mostrar na tela\n");
   
   for(cont = 0;cont < 5;cont++)
   
   {
       printf("Começe a digitar numeros para serem armzenados e impressos\n");
       scanf("%d", &vet[cont]);
   }
   printf("Exibição dos numeros dos vetores\n");
   for(cont=0;cont<5;cont++)
   
   {
       printf("Posiçao %d--->%d\n",cont,vet[cont]);
   }

    
}

