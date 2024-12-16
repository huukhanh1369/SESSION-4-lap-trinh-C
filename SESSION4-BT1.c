#include<stdio.h>
int main (){
    int n ;
    printf ("nhap vao so nguyen n de kiem tra: ");
    scanf("%d",&n);
    if( n < 0 ){
        printf("%d la so nguyen am",n);
    }
    else if( n == 0 ){
        printf("%d la so khong duong khong am",n);
    }
    else{
        printf("%d la so nguyen duong",n);
    }
    return 0;
}