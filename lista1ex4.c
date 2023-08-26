#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, r;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    r = n1;

    if (n2 >= r){
        r = n2;
    }
    if (n3 >= r){
        r = n3;
    }
    if (n4 >= r){
        r = n4;
    }    

    printf("Maior: %d", r);

    return 0;
}
