#include <stdio.h>

int main()
{
    //matrix içinde çoklu arama yapmak
    
    int a[5][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int x,y,aranan=0;

    
    printf("Aranan degeri giriniz: ");scanf("%d",&aranan);
    
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            if(a[x][y]  == aranan){
                printf("Eleman Bulundu: %d,%d\n",x+1,y+1);
            }
        }
    }
    
    
}

