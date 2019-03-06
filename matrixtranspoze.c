#include <stdio.h>

int main()
{
    //matrixin transpozesini almak! 
    
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    printf("Duzenlenmemiş Matrix: ");
    
    int x,y;
    printf("{");
    for(x=0;x<3;x++){
        printf("{");
        for(y=0;y<3;y++){
            if(y!= 2)   
            printf("%d,",a[x][y]); 
            else
            printf("%d",a[x][y]); 
        }
        if(x!= 2)
        printf("},");
        else
        printf("}");
    }
    printf("}\n\n");
    
    
    int temp=0;
    for(x=0;x<3;x++){
        
        for(y=0;y<x;y++){
            temp = a[x][y];
            a[x][y] = a[y][x];
            a[y][x] = temp;
            
        } 
        
    }
    
    
    printf("Transpoze Edilmiş Matrix: ");
    
    printf("{");
    for(x=0;x<3;x++){
        printf("{");
        for(y=0;y<3;y++){
            if(y!= 2)   
            printf("%d,",a[x][y]); 
            else
            printf("%d",a[x][y]); 
        }
        if(x!= 2)
        printf("},");
        else
        printf("}");
    }
    printf("}");
    
}
