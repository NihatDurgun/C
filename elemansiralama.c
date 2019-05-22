#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

        int *ntane = (int *) malloc(sizeof(int));
        int *ekleme = (int *) calloc(1,sizeof(int));
        int *temp  = (int *) malloc(sizeof(int));
        printf("Kac tane rakam uretilsin: ");scanf("%d",ntane);fflush(stdin);
        int *sayilar = (int *) malloc(sizeof(int)*(*ntane));

        if(sayilar == NULL){
            printf("Yer ayrilamadi");
            exit(1);
        }

        int i=0,j=0;
        while(1){
            srand(time(NULL));
            if(*ekleme == 0){
                for(i=0;i<(*ntane);i++){
                    sayilar[i] = rand() % 1000;
                }
            }else{
                for(i=*ntane-*ekleme;i<(*ntane);i++){
                    sayilar[i] = rand() % 1000;
                }
            }

            printf("Sayilar: ");
             for(i=0;i<*ntane;i++){
                printf("%d ",sayilar[i]);
            }

            for(i=0;i<(*ntane);i++){
               for(j=i+1;j<(*ntane);j++){
                    if(sayilar[j] < sayilar[i]){
                        *temp = sayilar[i];
                        sayilar[i] = sayilar[j];
                        sayilar[j] = *temp;
                    }
               }
            }

            printf("\nDuzenlenmis Hali:");
            for(i=0;i<*ntane;i++){
                printf("%d ",sayilar[i]);
            }
            printf("Kac tane eklemek istersiniz(Cikis icin 0):");scanf("%d",ekleme);fflush(stdin);
            if(ekleme != 0){
                *ntane += *ekleme;
            }else{
                break;
                printf("Program Kapatiliyor.");
            }
        }
        free(ntane);
        free(temp);
        free(sayilar);
}
