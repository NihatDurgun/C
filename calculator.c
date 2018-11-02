#include <stdio.h>

int main(){
printf("Hosgeldiniz!");

float s1,s2;
char islem;
while(1 == 1){
printf("\nYapabileceginiz Islemler: \n Toplama(+) \n Cikarma(-) \n Carpma(*) \n Bolme(/) \n Islem Seciniz: ");
scanf("%s",&islem);

printf("Islem Yapilacak Sayilari Arka Arkaya Aralarinda Bosluk Birakarak Giriniz: ");
scanf("%f %f",&s1,&s2);


if(islem == '+'){
printf("Sonuc: %.3f",s1+s2);
}else if(islem == '-'){
printf("Sonuc: %.3f",s1-s2);
}else if(islem == '*'){
printf("Sonuc: %.3f",s1*s2);
}else if(islem == '/'){
printf("Sonuc: %f",s1/s2);
}else{
printf("Yanlis Islem Girdiniz!");
}


printf("\n Cikis Yapmak Istermisiniz(E/e): ");
scanf("%s",&islem);
if(islem == 'e' || islem == 'E'){
break;
}
}

}
