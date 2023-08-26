#include <stdio.h>

int main()
{
    int t, a1, a2;

    scanf("%d", &t);

    if (t >= 0 && t < 5){
        printf("Iniciante");
    }else if (t >= 5 && t < 20){
        scanf("%d", &a1);
        if (a1 == 0){
            printf("Iniciante");
        }else{
            printf("Intermediário");
        }
    }else if(t >= 20){
        scanf("%d", &a2);
        if (a1 == 0){
            printf("Intermediário");
        }else{
            printf("Avançado");
        } 
    }
        
    return 0;
}
