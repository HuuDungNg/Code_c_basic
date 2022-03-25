// Dao so 124455 thanh 554421

#include <stdio.h>

void reverse(int n);

int main(){
    int n;
    printf("Nhap so: ");
    scanf("%d", &n);
    reverse(n);
    return 0;
}

void reverse(int n){
    int reverse_number=0;
    while(n>0){
        reverse_number = reverse_number*10 + (n % 10);
        n /= 10;
    }
    printf("Reverse number is: %d \n", reverse_number);
}