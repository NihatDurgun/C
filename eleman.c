#include <stdio.h>
#include <string.h>
void main()
{
    int sayi[999];
    memset(sayi,0,999);
    int i=1,toplam=0,gsayi=0,ptoplam=0,enbuyuk=0,enkucuk=0;
    while(1){
        printf("%d.'nci sayiyi giriniz(99999 Cikis): ",i);scanf("%d",&gsayi);
        if(gsayi == 99999){
            break;
        }else{
        sayi[i-1] = gsayi;
        i++;
        }
    }

    for(int x=0;x<i;x++){
        toplam += sayi[x];

        if(sayi[x] > 0){
        ptoplam += sayi[x];
        }

        if(sayi[x] > enbuyuk){
            enbuyuk = sayi[x];
        }

        if(sayi[x] < enkucuk){
            enkucuk = sayi[x];
        }
    }
    int ortalama = toplam /i;
    printf("\n-------------------------------------------------------\n\n");
    printf("%d tane sayi girdiniz ve bunlara iliskin bilgiler:\n",i);
    printf("1-)Sayilarin en buyugu: %d'dir\n",enbuyuk);
    printf("2-)Sayilarin en kucugu: %d'dir\n",enkucuk);
    printf("3-)Sayilarin Toplami: %d'dir\n",toplam);
    printf("4-)Sadece Pozitif Sayilarin Toplami: %d'dir\n",ptoplam);
    printf("5-)Sayilarin Ortalama: %d'dir\n",ortalama);
    printf("\n-------------------------------------------------------\n\n");
}

