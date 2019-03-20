#include <stdio.h>
#include <string.h>

int main()
{
    char username[20]="";
    char password[20]="";
    int length=0,i=0,y=0;
    while(1){
        i=0;y=0;
        printf("Kadi ve Sifre Olusturma (En fazla 8 karakter arada bolsuk olmucak!\n");
        printf("K.adi:");scanf("%s",username);
        printf("Sifre:");scanf("%s",password);
        while(username[i] != '\0')
            i++;
        while(password[y] != '\0')
            y++;
        if(i>8)
            printf("K.adi 8 karakterden fazladir.Yeniden Deneyiniz");
        else if(y > 8)
            printf("Password 8 karakterden fazladir.Yeniden Deneyiniz");
        else{
            printf("k.adi ve sifre olusturma basarili!");
            break;
        }
    }
    
}
