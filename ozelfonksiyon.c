#include <stdio.h>

void main(){
    for(int x=2;x<7;x++){
        printf("%d %d %d %d %d\n",x,(2*x)-1,(3*x)-2,(4*x)-3,(5*x)-4);
    }

}

/*

2 3 4 5 6
3 5 7 9 11
4 7 10 13 16
5 9 13 17 21
6 11 16 21 26

Oruntu Kuralı: x 2x-1 3x-2 4x-3 5x-4
*/
