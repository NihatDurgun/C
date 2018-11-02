#include <stdio.h>

int main()
{
int sonsayi=0,toplam=0;
printf("Sonsayiyi Giriniz: ");scanf("%d",&sonsayi);

for(int i=0;i<=sonsayi;i++){
toplam =toplam + (i*i);
}
printf("0'dan %d kadar olan sayilarin kareleri toplami %d'dir.",sonsayi,toplam);






}
