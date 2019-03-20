#include <stdio.h>

float karakter_sayici(char dogru[30],char cevap[30]){
    int ntane=0,i;
    for(i=0;i<30;i++){
        if(cevap[i] != '\0'){
            if(dogru[i] == cevap[i]){
                ntane++;
            }
        }else
            break;
    }
    return ((float)ntane/(float)i)*100;
}

int main()
{
    char dogru[30]="";
    char cevap[30]="";
    
    printf("Dogru Cevaplari Giriniz: ");scanf("%s",&dogru);
    printf("Ogrenci Cevaplari Giriniz: ");scanf("%s",&cevap);
    
    printf("Ogrencinin aldigi puan: %.6f",karakter_sayici(dogru,cevap));
}
