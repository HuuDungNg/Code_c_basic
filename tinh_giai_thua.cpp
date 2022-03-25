//Viết chương trình tính n!!. Biết rằng n!! = 1.3.5..n nếu n lẻ, và n!! = 2.4.6…n nếu chẵn.
#include <stdio.h>

long giaithua(int );

int main(){
    int n;
    long result;
    do{
        printf("\nNhap so N: "); 
        scanf("%d", &n);
    }
    while(n<0);
    result = giaithua(n);
    printf("Ket qua %d!!: %ld\n", n, result);
    return 0;
}

long giaithua(int n){
    if( n==1 || n == 0){
        return 1;
    }
    else return n * giaithua(n-2);
}