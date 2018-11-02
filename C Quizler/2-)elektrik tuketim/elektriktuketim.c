#include <stdio.h>

int main(){

    int tuketilen=0,ucret=0,fatura=0;
    printf("Tuketilen elektrik miktarini giriniz(kWh): ");scanf("%d",&tuketilen);

    if(tuketilen < 50 ){
        ucret = tuketilen * 0.5;
    }else if(tuketilen >= 50 && tuketilen < 100){
        ucret = tuketilen * 0.75;
    }else if(tuketilen >= 100){
        ucret = tuketilen;
    }
    fatura = ucret + (ucret * 0.2); // ucrete %20 oranında vergi yansıtılıyor
    printf("Odenmesi Gereken Fatura: %d TL",fatura);
    return 0;

}
