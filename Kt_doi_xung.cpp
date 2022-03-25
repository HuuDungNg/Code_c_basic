//Số đối xứng hay còn gọi là “palindrome”. Ví dụ: 123321 là số đối xứng, 12012 không phải số đối xứng.

#include <stdio.h>

int reverse(int );
void check(int );


int main(){
    int n;
    int result;
    do{
        printf("\nNhap so: ");
        scanf("%d", &n);
    }
    while(n<0);
    check(n);
    return 0;
}

int reverse(int n){
    int reverse_number=0;
    while(n>0){
        reverse_number = reverse_number*10 + (n % 10);
        n /= 10;
    }
    return reverse_number;
}

void check(int n){
    int result;
    result = reverse(n);
    if(result == n){
        printf("%d là số đối xứng\n", n);
    }
    else printf("%d không phải là số đối xứng\n", n);
}