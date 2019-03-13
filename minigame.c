#include <stdio.h>
#include <time.h>

void topcek(int *sonuclar[],int boyut)
{
    int i;
    int sayilar[boyut];
    for(i = 0; i < boyut;i++){
        sayilar[i] = rand() % 10;
        sonuclar[i] = &sayilar[i];
    }
}

int kontrol(int *gdr[],int *sonuclar[],int boyut)
{   
    
    int i,dogru=0;
    for(i=0;i<boyut;i++){
        if(*gdr[i] == *sonuclar [i])
            dogru++;
    }   
    printf("Cekilen Toplar:\t");
    for(i=0;i<boyut;i++){
        printf("%d\t",*sonuclar[i]);
    }
    printf("\nTahminler:\t");
    for(i=0;i<boyut;i++){
        printf("%d\t",*gdr[i]);
    }
    
    
    return dogru;
}

int main()
{
    srand(time(NULL));
    int boyut=3,i;
    int sayilar[boyut];
    int *gdr[boyut];
    int *sonuclar[boyut];
    
    for(i=0;i<boyut;i++){
        printf("%d.inci sayiyi giriniz: ",i+1);scanf("%d",&sayilar[i]);
        gdr[i] = &sayilar[i];
    }
    printf("\n\n");
    
    topcek(sonuclar,boyut);
    int sonuc = kontrol(gdr,sonuclar,boyut);
    
    printf("\n%d tane deger tuttu.",sonuc);
}

