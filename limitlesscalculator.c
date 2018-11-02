#include <stdio.h>
#include <string.h>



int main(){
    char islem[100],strsayi[10];
    int sayi,toplam=0,sonarti=0,c=0;

    memset(strsayi, 0, strlen(strsayi));
    memset(islem, 0, strlen(islem));
    printf("Isleminizi Giriniz: ");scanf("%s",&islem);
    printf("Islem Uzunlugu: %d\n",strlen(islem));

    for(int x=0; x < strlen(islem); x++){

        if(islem[x] == '+'){

            for(int b=sonarti;b<x;b++){
                strsayi[strlen(strsayi)] = islem[b];
            }
            sayi= atoi(strsayi);
            sonarti= x;
            c++;
            toplam += sayi;
            memset(strsayi, 0, strlen(strsayi));
        }else if(x == (strlen(islem)-1)){
            for(int b=sonarti+1;b<strlen(islem);b++){
                strsayi[strlen(strsayi)] = islem[b];
            }
            sayi= atoi(strsayi);
            c++;
            toplam += sayi;
            memset(strsayi, 0, strlen(strsayi));
        }
    }
    printf("%s = %d",islem,toplam);
}


