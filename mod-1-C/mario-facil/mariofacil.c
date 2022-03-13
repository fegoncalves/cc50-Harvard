/*  
Exercício 1: Mario (versão fácil) realizado no ambiente de desenvolvimento integrado - CS50 IDE

Mundo 1-1

Perto do final do Mundo 1-1 no Super Mario Brothers da Nintendo, Mario deve ascender a pirâmide de blocos alinhada à direita

Vamos recriar essa pirâmide em C, ainda que em texto, usando hashes ( # ) para tijolos, como visto a seguir. Cada hash é um pouco mais alto do que largo, então a pirâmide em si também é mais alta do que larga.

       #
      ##
     ###
    ####
   #####
  ######
 #######
########

Se o usuário não inserir, de fato, um número inteiro positivo entre 1 e 8, inclusive, quando solicitado, o programa deve solicitar novamente ao usuário até que ele coopere:

$ ./mario
Tamanho: -1               
Tamanho: 0               
Tamanho: 42               
Tamanho: 9               
Tamanho: 4               
   #
  ##
 ###
####
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

        //Impressão de novas linhas
        printf("\n");
    }
}