#include<stdio.h>
int main(){
    int month, n;
    printf("nhap vao so thang muon xem ngay: ");
    scanf("%d",&month);
    if(month == 1 || month ==3||month == 5||month ==7||month ==8|| month ==10||month ==12){
        n = 1;
    }
    else if (month == 2){
        n = 2;
    }
    else if(month ==4||month == 6||month ==9||month ==11){
        n = 3;
    }
    switch (n){
        case 1 :
        printf("thang %d co 31 ngay ",month);
        break;
        case 2 :
        printf("thang %d co 28 hoac 29 ngay",month);
        break;
        case 3 :
        printf("thang %d co 30 ngay ",month);
        break;
        default :
        printf("%d la so thang khong hop le",month);
        break;
    }
    return 0;
}