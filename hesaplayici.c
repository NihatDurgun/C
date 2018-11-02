#include <stdio.h>

void main(){

    float mat[3],fizik[3],prog[3];
    mat[2]=0; fizik[2]=0; prog[2]=0;

    for(int i=1;i<=2;i++){
        printf("Mat dersinin %d'inci sinav sonucunu giriniz: ",i);scanf("%f",&mat[i-1]);
        mat[2] += mat[i-1];
    }
    mat[2] = mat[2] / 2;
    for(int i=1;i<=2;i++){
        printf("Fizik dersinin %d'inci sinav sonucunu giriniz: ",i);scanf("%f",&fizik[i-1]);
        fizik[2] += fizik[i-1];
    }
    fizik[2] = fizik[2] /2;
    for(int i=1;i<=2;i++){
        printf("Prog. dersinin %d'inci sinav sonucunu giriniz: ",i);scanf("%f",&prog[i-1]);
        prog[2] += prog[i-1];
    }
    prog[2] = prog[2] /2;

    if(mat[2] >= 65){
        printf("Mattan Gectiniz! Mat dersi ortalamaniz %.2f'dir\n",mat[2]);
    }else{
        printf("Mattan Kaldiniz! Mat dersi ortalamaniz %.2f'dir\n",mat[2]);
    }

    if(fizik[2] >= 65){
        printf("Fizikten Gectiniz! Fizik dersi ortalamaniz %.2f'dir\n",fizik[2]);
    }else{
        printf("Fizikten Kaldiniz! Fizik deris ortalamaniz: %.2f'dir\n",fizik[2]);
    }

    if(prog[2] >= 65){
        printf("Prog. Gectiniz! Prog. dersi ortalamaniz %.2f'dir\n",prog[2]);
    }
    else{
        printf("Prog. Kaldiniz! Prog. dersi ortlamaniz %.2f'dir\n",prog[2]);
    }


    float ortalama = ((mat[2] + fizik[2] + prog[2]) /3)/25;
    if(ortalama >= 3.2){
        printf("Cok guzel bir ortalamaniz var: %.3f",ortalama);
    }else if(ortalama >= 2.5){
        printf("Gecmenize yeterli bir ortalamaniz var: %.3f",ortalama);
    }else{
        printf("Maalesef ortalamaniz gecmenize yeterli degil: %.3f",ortalama);
    }

}
