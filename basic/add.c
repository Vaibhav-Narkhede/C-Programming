#include<stdio.h>

int add(int, int);

int main(){
    int n1, n2, sum = 0;
    printf("Enter Number 1: ");
    scanf("%d", &n1);
    printf("Enter Number 2: ");
    scanf("%d", &n2);
    sum = add(n1,n2);
    printf("Addition = %d\n",sum);
    return 0;
}

int add(int a, int b){
    return a + b;
}
