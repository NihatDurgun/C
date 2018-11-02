#include <stdio.h>

int main(){

    for(int i=1;i<=10;i++){
        for(int x=1;x<=10;x++){
         if(!(i !=1 && i!=10 && x !=1 && x!=10)){
             printf("*");
         }else{
             printf(" ");
         }

        }
        printf("\n");
    }


}
