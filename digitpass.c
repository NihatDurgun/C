#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char sifre[999];
    int boyut=0,i,ntane = 0;

    while(1){
        printf("Sifrenizi Giriniz: ");fgets(sifre,999,stdin);
        for(i=0;sifre[i] != '\0';i++){boyut++;}
        boyut -= 1;
        printf("Sifreniz Boyutu: %d",boyut);

        for(i=0;i<boyut;i++){
            if(isdigit(sifre[i])){
                ntane++;
            }
        }
        if(ntane == boyut ){
            printf("\nSifreniz tanimlanmistir.");
            break;
        }else{
            printf("\nSifrenizde sayi disinda karakter var tekrardan deneyiniz!\n");
            boyut=0;ntane=0;i=0;
        }
    }

}
