#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string nome = get_string("Qual é seu nome? \n");
    printf("olá,%s \n", nome);

    printf("hello, world!\n");
}