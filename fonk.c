#include <stdio.h>

void main(){
    for(int i=1;i<=7;i++){
        for(int x=i;0<x;x--)
        {
        printf("%d ",x);
        }
        printf("\n");
    }
}


/*
 1
 2 1
 3 2 1
 4 3 2 1
 5 4 3 2 1
 6 5 4 3 2 1
 7 6 5 4 3 2 1
*/
