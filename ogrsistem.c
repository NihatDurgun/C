#include <stdio.h>
#include <stdlib.h>
#define PATH_OGR "ogr.txt"

struct Ogrenci {
    char no[10];
    char ad[20];
    char soyad[20];
    int not;
};

void listele(){
    FILE *dosya;

    if((dosya = fopen(PATH_OGR,"r")) == NULL){
        printf("Dosya Acilamadi!");
        exit(1);
    }

    while(1){
        struct Ogrenci ogrenci;
        size_t sayi = fread(&ogrenci,sizeof(struct Ogrenci),1,dosya);

        if(sayi < 1)
            break;
        printf("%s %s %s %d\n",ogrenci.no,ogrenci.ad,ogrenci.soyad,ogrenci.not);
    }

    fclose(dosya);

}

void kayit_ekle(struct Ogrenci ogr){
    FILE *dosya;

    if((dosya = fopen(PATH_OGR,"a")) == NULL ){
        printf("Dosya Acilamadi!");
        exit(1);
    }

    fwrite(&ogr,sizeof(struct Ogrenci),1,dosya);

    fclose(dosya);
}

void kayit_sil(){
    FILE *dosya;

    if((dosya = fopen(PATH_OGR,"w")) == NULL){
        printf("Dosya Acilamadi!");
        exit(1);
    }

    fclose(dosya);
}

int main(){

    while(1){
        int secim=0;
        printf("1:Listele\n2:Kayit Ekle\n3:Kayitlari Sil\n4:Cikis\nSecim Ekle:");
        scanf("%d",&secim);
        if(secim == 1){
            listele();
        }
        else if(secim == 2){
            struct Ogrenci ogr;
            printf("No Ad Soyad Not:");
            scanf("%s %s %s %d",&ogr.no,&ogr.ad,&ogr.soyad,&ogr.not);
            kayit_ekle(ogr);
            break;
        }
        else if(secim == 3){
            kayit_sil();
        }
        else if(secim == 4){
            exit(1);
        }else{
            printf("Yanlis Secim Yaptiniz!");
        }

    }

}
