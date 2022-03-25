/*
Viết chương trình in dãy số Fibonanci nhỏ hơn giá trị N. Biết rằng:
f(0) = f(1) = 1
f(n) = f(n – 1) + f(n – 2)*/

#include <stdio.h>

int fibonanci(int n){
    if((n==0) || (n==1) ){
        return 1;
    }
    else{
        return fibonanci(n-1) + fibonanci(n-2);
    }
}

int main(){
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("%d ", fibonanci(i));
    }
    return 0;

}