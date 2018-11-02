#include <stdio.h>

//5*3 3 tane 5
int main(){

    int s1=0,s2=0,toplam=0;
    printf("Hosgeldiniz Bu program carpma islemi kullanmadan carpma islemi buluyor !\n");
    printf("Iki adet aralarinda bosluk birakarak sayi giriniz: ");scanf("%d %d",&s1,&s2);

    for(int i=1;i<=s2;i++){
        toplam += s1;
    }

    printf("Sonuc: %d",toplam);
}
