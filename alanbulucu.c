#include <stdio.h>

int main(){

int islem;

printf("Hosgeldiniz!\n 1-)Ucgen Alan Hesaplama \n 2-)Daire Alan Hesaplama \n 3-)Diktorgen Alan Hesaplama \n 4-)Kare Alan Hesaplama \n 5-)Cikis \nLutfen Islem Seciniz: ");
scanf("%d",&islem);

if(islem == 1){
    float yukseklik,taban;
    printf("Sirasiyla Yukselik ve Taban Uzunlugunu Giriniz: ");scanf("%f %f",&yukseklik,&taban);
    printf("Ucgenin Alani %.3f'dir.",(yukseklik*taban)/2);
}else if(islem == 2){
    float pi=3.14,yaricap;
    printf("Hesaplamak istediginiz dairenin yaricapini giriniz: ");scanf("%f",&yaricap);
    printf("Dairenin Alani %.3f'dir.",(pi*yaricap*yaricap));

}else if(islem == 3){
    float uzunkenar,kisakenar;
    printf("Sirasiyla uzunkenari ve kisakenari giriniz: ");scanf("%f %f",&uzunkenar,&kisakenar);
    printf("Dikdortgenin Alani %.3f'dir.",(uzunkenar*kisakenar));
}else if(islem ==4){
    float kenar;
    printf("Lutfen karenin bir kenarini giriniz: ");scanf("%f",&kenar);
    printf("Karenin Alani %.3f'dir.",(kenar*kenar));
}else if(islem == 5){
    printf("Kullandiginiz icin tesekkurler!\nProgram Kapatiliyor...");
}else{
    printf("Yanlis bir deger sectiniz!");
}
}
