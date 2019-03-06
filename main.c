/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    //iki matrisin toplanması
    int a[3][2] = {{1,2},{2,3},{3,4}};
    int b[3][2] = {{4,3},{3,2},{2,1}};
    int c[3][2];
    
    int i,x;
    for(i=0;i<3;i++){
        for(x=0;x<2;x++){
         c[i][x] = a[i][x] - b[i][x];
         printf("Olusturulan C dizisi: %d\n",c[i][x]);

        }
    }
    
}
