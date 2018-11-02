#include <stdio.h>

int main(){

    int s1=1;
    for(int i=1;i<=5;i++){
        for(int x=1;x<=i;x++){
            printf("%d ",s1);
            s1++;
        }
        printf("\n");
    }







}

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
