/* 
No programa que escreveremos vamos permitir que o usuário decida a altura das pirâmides, primeiro solicitando um número inteiro positivo entre, digamos, 1 e 8, inclusive.

Veja como o programa pode funcionar se o usuário inserir 8 quando solicitado:

$ ./mario
Altura: 8
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########


Se o usuário não inserir, de fato, um número inteiro positivo entre 1 e 8, inclusive, quando solicitado, o programa deve solicitar novamente ao usuário até que ele escreva o valor correto:

$ ./mario
Altura: -1
Altura: 0
Altura: 32
Altura: 10
Altura: 4
   #  #
  ##  ##
 ###  ###
####  ####

 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height;

    do
{
    height = get_int("Que altura deseja que a pirâmide tenha? \n");
}
    while (height < 1 || height > 8);

     for (int numA = 0; numA < height; numA++)
    {
        //Impressão dos espaços
        for (int numB = height - 1; numB > numA; numB--)
        {
            printf(" ");
        }

        //Impressão das hashtags a esquerda da pirâmide
        for (int numC = height + 1; numC > height - numA; numC--)
        {
            printf("#");
        }

        //Impressão dos espaços (largura de dois hashes) entre as pirâmides
        printf("  ");

        //Impressão das hashtags a direita da pirâmide
        for (int numC = height + 1; numC > height - numA; numC--)
        {
            printf("#");
        }

        //Nova linha
        printf("\n");
    }
}