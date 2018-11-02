#include <stdio.h>
#include <math.h>

//1'den 999'a kadar olan tam sayılar içeresinden basamaklarının küp değeri toplamı kendisine eşit olan c programı
int main(){
    float sonsayi=999;
    int ozelsayi=0,yuzler=0,onlar=0,birler=0;
    for(int i=1;i<=999;i++){
        yuzler = i/100;
        onlar = (i-yuzler*100)/10;
        birler = (i-((yuzler*100)+(10*onlar)));
        if(i >= 100){
            if((float)i == ( pow(birler,3) + pow(onlar,3)+ pow(yuzler,3)))
            {
                printf("Yeni Sayi Bulundu: %d \n",i);
                ozelsayi++;
            }
        }else if(i >=10  && i < 100){
            if((float)i == (pow(birler,3)+pow(onlar,3)))
            {
                printf("Yeni Sayi Bulundu: %d \n",i);
                ozelsayi++;
            }
        }else if(i>= 1 && i <10){
            if((float)i == pow(birler,3)){
                printf("Yeni Sayi Bulundu: %d \n",i);
                ozelsayi++;
            }
        }

    }
    printf("Toplam Ozel Sayi %d",ozelsayi);
}
