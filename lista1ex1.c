int main(){
   
    int a, b, r;
    
    printf("Digite os valores a serem divididos\n");
    scanf("%d %d", &a, &b);

    
        if (a%b == 0){
            r = a/b;
            printf("Resultado: %d", r);
        }
    
    return 0;
}
