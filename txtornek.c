#include <stdio.h>
#include <stdlib.h>
#define PATH_DATABASE "veritabani.txt"

int main()
{
    FILE *dosya;
    char str[999];

    if ( (dosya = fopen(PATH_DATABASE, "r")) == NULL) {
        printf("Hata olustu!");
        exit(1);
    }
    fseek(dosya,0,SEEK_END);
    int len,length;
    len = ftell(dosya);;
    length = len;
    char c;
    printf("Dosyanin Boyutu: %ld byte\n",len);
    fseek(dosya,0,SEEK_SET);

    len = ftell(dosya);
    c = fgetc(dosya);
    printf("%d inci karakter %c'dir",len,c);
    len = ftell(dosya);
    c = fgetc(dosya);
    printf("%d inci karakter %c'dir",len,c);
    len = ftell(dosya);
    c = fgetc(dosya);
    printf("%d inci karakter %c'dir",len,c);
    fseek(dosya,length-1,SEEK_SET);
    len = ftell(dosya);
    c = fgetc(dosya);
    printf("%d inci karakter %c'dir",len,c);
}
