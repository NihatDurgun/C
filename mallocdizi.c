#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int *g_sayi,girilen,ntane=0;
    g_sayi = (int *)malloc(sizeof(int)*2);

    if(g_sayi == NULL){
        printf("Bellek Alaný tahsil edilirken sorun oluþtu.Program Kapatýlýyor!");
        exit(1);
    }

    while(1){
        girilen=123;
        printf("%d'inci sayiyi giriniz(Cikis icin 0):",ntane);scanf("%d",&girilen);fflush(stdin);
        if(girilen != 0){
            ntane++;
            g_sayi[ntane] = girilen;
            g_sayi = realloc(g_sayi,(ntane+2)*sizeof(int));
        }else{
            if(ntane- 1 != 0){
                printf("Veri girisinden Cikiliyor %d tane sayi girildi! ",ntane);
            }
            else{
                printf("Herhangi bir deger girilmedi!");
            }
            break;
        }
    }

    int i,j;

    if(ntane-1 != 0){
        int *temp = (int *)malloc(sizeof(int));
        for(i=0;i<=ntane;i++){
            for(j=i+1;j<=ntane;j++){
                if(g_sayi[i] > g_sayi[j]){
                    *temp = g_sayi[i];
                    g_sayi[i] = g_sayi[j];
                    g_sayi[j] = *temp;
                }
            }
        }

        free(temp);
    }

    for(i=1;i<=ntane;i++){
        printf("%d ",g_sayi[i]);
    }
    free(g_sayi);
}
