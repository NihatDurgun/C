#include <stdio.h>

//Tau sayýsý uygulamasý 8  --> 1 2 4 8 --> 8 / 4 = 2

int pozitif_bolen(int gsayi){
	int ntane = 0,i;
	printf("\nPozitif Bolenler Bulunmaya Baslaniyor...\n");
	for(i=1;i<gsayi;i++){
		if(gsayi % i == 0){
			ntane++;
			printf("%d.Yeni Bir Sayi Bulundu: %d\n",ntane,i);
		}
	}
	printf("\nPozitif Bolme Tamamlandi Toplam %d Tanedir\n",ntane);
	return ntane;	
}

int main(){
	int gsayi=0,ntane=0;
	printf("Sayi giriniz: ");scanf("%d",&gsayi);
	
	ntane = pozitif_bolen(gsayi);
	
	printf("Sonuc: ");
	if(gsayi % ntane == 0)
		printf("Girilen Sayi Tau Sayisidir.");
	else
		printf("Girilen Sayi Tau Sayisi Degildir.");
	
	
}
