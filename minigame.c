#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Rastgele sayilari "sonuclar" dizisine doldurur. Bu dizinin belleği
 * fonksiyonu çağıran tarafça sağlanmalıdır.
 */
void topcek(int sonuclar[], int boyut)
{
    for(int j = 0; j < boyut; j++){
        sonuclar[j] = rand() % 10;
    }
}

int kontrol(int *gdr[], int sonuclar[], int boyut)
{
    int dogru = 0;
    for(int i = 0; i < boyut; i++){
        if(*gdr[i] == sonuclar[i])
            dogru++;
    }

    printf("Cekilen Toplar:\t");
    for(int i = 0; i < boyut; i++){
        printf("%d\t", sonuclar[i]);
    }

    printf("\nTahminler:\t");
    for(int i = 0; i < boyut; i++){
        printf("%d\t", *gdr[i]);
    }

    return dogru;
}

int main()
{
    srand(time(NULL));
    int boyut=3,i;
    int sayilar[boyut];
    int *gdr[boyut];
    int sonuclar[boyut];
    
    for(i=0;i<boyut;i++){
        printf("%d.inci sayiyi giriniz: ",i+1);scanf("%d",&sayilar[i]);
        gdr[i] = &sayilar[i];
    }
    printf("\n\n");
    
    topcek(sonuclar, boyut);
    int sonuc = kontrol(gdr, sonuclar, boyut);
    
    printf("\n%d tane deger tuttu.",sonuc);
}

