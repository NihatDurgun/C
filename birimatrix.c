#include <stdio.h>


int main()
{
    //Birim matrix oluşturma
    int boyut=0;
    int x,y;
    printf("Olusturulmasini istediginiz matrix boyutunu giriniz: ");scanf("%d",&boyut);
    
    int matrix[boyut][boyut];
    for(x=0;x<boyut;x++){
        for(y=0;y<boyut;y++){
            if(x == y)
            matrix[x][y] = 1;
            else
            matrix[x][y] = 0;
            
        }
    }
    
   
    for(x=0;x<boyut;x++){
        for(y=0;y<boyut;y++){
            if(y!=boyut-1)
            printf("%d,",matrix[x][y]);
            else
            printf("%d",matrix[x][y]);
        }
        printf("\t");
    }
    return 0;
}
