#include <stdio.h>

//Sayinin Basamak toplamlarını bulan bir program
int main(){
    char strsayi[100];
    int toplam=0;
    memset(strsayi,0,strlen(strsayi));
    printf("%s",strsayi);
    printf("Sayiyi Giriniz: ");scanf("%s",&strsayi);

    for(int i=0;i < strlen(strsayi);i++){
        toplam += strsayi[i] - '0';
    }
    printf("Sonuc %d",toplam);
}
