#include <stdio.h>

void sirala(int *gdr[],int boyut)
{   
    int i,j;
    for(i=0;i<boyut;i++){
        for(j=i+1;j<boyut;j++){
            if(*gdr[i] > *gdr[j]){
                int temp = *gdr[i];
                *gdr[i] = *gdr[j];
                *gdr[j] = temp;
            }
        }
    }   
}

int toplam(int *gdr[],int boyut){
    int i,sonuc=0;
    for(i=0;i<boyut;i++)
        sonuc+= *gdr[i];
    return sonuc;
}

int main()
{
    int boyut=0,i;
    printf("Kac tane sayi gireceksiniz: ");scanf("%d",&boyut);
    int sayilar[boyut];
    int *gdr[boyut];
    for(i=0;i<boyut;i++){
        printf("%d.inci sayiyi giriniz: ",i+1);scanf("%d",&sayilar[i]);
        gdr[i] = &sayilar[i];
    }
    sirala(gdr,boyut);
    
    for(i=0;i<boyut;i++)
        printf("%d\t",*gdr[i]);
    
    int sonuc = toplam(gdr,boyut);
    printf("\nToplam: %d",sonuc);
}
