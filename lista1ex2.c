#include <stdio.h>
int main()
{
    /* os numeros são soma de outro? */

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

        if (a + b == c || a + c == b || b + c == a){

            printf("Um dos números é a soma dos outros dois");

        } else {

            printf("Nenhum dos números é a soma dos outro dois");

    }

    return 0;
}
