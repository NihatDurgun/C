#include <stdio.h>

int main(){
int s1,s2,s3;

printf("Lutfen Siralanicak Sayilari Aralarinda Bolsuk Birakarak Yaziniz: ");scanf("%d %d %d",&s1,&s2,&s3);

if(s1 != s2 && s1 != s3 && s2!=s3){
    if(s1 > s2 && s1 > s3){
        if(s2 > s3){
            printf("%d > %d > %d",s1,s2,s3);
        }else if(s3 > s2)
        {
            printf("%d > %d > %d",s1,s3,s2);
        }
    }else if(s2 > s1 && s2 > s3){
        if(s1 > s3)
        {
            printf("%d > %d > %d",s2,s1,s3);
        }else if(s3 > s1){
            printf("%d > %d > %d",s2,s3,s1);
        }
    }else if(s3 > s1 && s3 > s2){
        if(s1 > s2){
            printf("%d > %d > %d",s3,s1,s2);
        }else if(s2 > s1){
            printf("%d > %d > %d",s3,s2,s1);
        }

    }

}else{
    printf("Bu sayilarin en az ikisi ayni.Lutfen farkli sayilar giriniz !");
}
}
