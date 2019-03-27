#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    char harf;
    printf("İcinde Harf Aranicak Cumleyi Giriniz: ");fgets(cumle,100,stdin);
    printf("Aranicak Harfi Giriniz: ");scanf("%c",&harf);

    int i,ntane=0;

    for(i=0;cumle[i] != '\0';i++){
        if(cumle[i] == harf)
        ntane++;
    }
        printf("\n%d tane %c harfinden var.",ntane,harf);
    return 0;
}
