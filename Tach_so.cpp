//Viết chương trình nhập vào số nguyên 3 chữ số (từ 100 – 999), sau đó in ra các chữ số thuộc hàng trăm, hàng chục, hàng đơn vị

#include <stdio.h>

int main(){
    int n;
    do{
        printf("Nhap so n: ");
        scanf("%d", &n);
    }
    while(n<100 || n >999);
    printf("So hang tram: %d\n", (n/100)%10);
    printf("So hang chuc: %d\n", (n/10)%10);
    printf("So hang donvi: %d\n", n%10);
    return 0;
}
