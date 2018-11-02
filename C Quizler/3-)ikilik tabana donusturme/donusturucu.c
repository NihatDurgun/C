#include <stdio.h>


void main(){

    int sayi=0,cevirici=0;
    printf("Ikilik tabana donusturlecek sayiyi yaziniz: ");scanf("%d",&sayi);

    printf("Sayinin ikilik tabana yazilisi(Tersten): ");
    while(sayi>0){
        cevirici = sayi%2;
        sayi /= 2;
        printf("%d",cevirici);
    }
    printf("\n\n\n");

}
