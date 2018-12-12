#include <stdio.h>
#include <math.h>

int nbulucu(){
	int n=0;

	do{
		if(n > 50){
			printf("N sayisini maksimum 50 girebilirisiniz!\n");
		}
		printf("N Sayisini Giriniz: ");scanf("%d",&n);
	}while(n>50);
	
	return n;
}

int main(){
	int n=0,i,b;
	n = nbulucu();
	printf("\n");
	
	int gsayi[50],gsayiuz[50];
	for(i=0;i<n;i++){
		printf("%d.inci sayiyi giriniz: ",i+1);scanf("%d",&gsayi[i]);
	}
	
	float ortalama= 0;
	for(b=0;b<n;b++){
			ortalama += gsayi[b];
	}
	ortalama /= (float)n;
	printf("\ngsayinin Ortalamasi : %.2f",ortalama);
	
	for(b=0;b<n;b++){
			gsayiuz[b] = abs(gsayi[b]-ortalama);
	}
	
	int enzkd = 0,enykd=0;
	for(b=1;b<n;b++){
			if(gsayiuz[enykd] > gsayiuz[b]){
				enykd =b;
			}
			if(gsayiuz[enzkd] < gsayiuz[b]){
				enzkd =b;
			}
	}
	
	printf("\n\nEn Uzak Deger: %d",gsayi[enzkd]);
	printf("\nEn Yakin Deger: %d",gsayi[enykd]);
	
	return  0;
}
