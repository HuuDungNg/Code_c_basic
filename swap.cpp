/*Yêu cầu:
–  Khai báo 2 biến được gán giá trị ban đầu.
– Viết hàm đổi chỗ giá trị của 2 biến cho nhau
Giải thuật:
– Ta viết hàm với tham số truyền vào là 2 biến được khai báo. 
Như các bạn đã biết, nếu truyền tham trị, sẽ không thể thay đổi giá trị của chúng được. 
Muốn thay đổi được giá trị của 2 biến truyền vào, chúng ta cần truyền tham biến (con trỏ + tham chiếu).*/

#include <stdio.h>

/*void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}*/
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a , b;
    printf("Nhap hai so a va b: ");
    scanf("%d %d", &a, &b);
    printf("So truoc khi doi cho a = %d, b = %d\n", a ,b);
    //swap(&a,&b);
    swap(a,b);
    printf("So sau khi doi cho a = %d, b = %d\n", a , b);
    return 0;
}