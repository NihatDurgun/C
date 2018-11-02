#include <stdio.h>

int main(){
    int sonsayi=0,toplam=0;
    printf("Sonuncu Sayiyi Giriniz: ");scanf("%d",&sonsayi);

    for(int i=0;i<=sonsayi;i++){
        if(i % 2 == 1){
         toplam += i;
        }
    }
    printf("0'dan %d kadar olan tek tamsayilarin toplami %d'dir.",sonsayi,toplam);



}
