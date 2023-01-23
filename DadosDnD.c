#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main () {

setlocale (LC_ALL, "Portuguese");

int a, b, c, d, soma;
printf ("Pronto para começar?\n");
system ("pause");

//quatro números aleatórios entre 1-5

printf ("Rolando 4 dados...\n");
srand (time(NULL));

    a = rand () % 5 + 1;
    b = rand () % 5 + 1;
    c = rand () % 5 + 1;
    d = rand () % 5 + 1;

printf ("Os resultados foram: %i, %i, %i, %i!\n", a, b, c, d);

//eliminando o dado de menor valor

    if (a < b && a < c && a < d){
        a=0;
        }

    if (b < a && b < c && b < d){
        b=0;
        }

    if (c < a && c < b && c < d){
        c=0;
        }

    if (d < a && d < b && d < c){
        d=0;
        }

    if (a == b && b == c && c == d){
        a=0;
        }

//somando os resultados
soma = a + b + c + d;

//resultado final
printf ("Eliminando o de menor valor,\n");
printf ("a soma dos outros valores foi: %i", soma);

}
