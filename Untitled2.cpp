#include<stdio.h>

int main() {
    int songuyen = 30;
    int sonhap;
    while (30){
        printf("Nhap mot so: ");
        scanf("%d", &sonhap);
        if(sonhap == songuyen){
            printf("Dung so roi\n");
            break;    

        }else{
            printf("Sai so roi\n");
        }
    }
    return 0;
}
	

