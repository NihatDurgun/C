#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct cumle{
    char word[50];
    int x;
    struct  cumle * sonraki;
};
typedef struct cumle node;

node * EklemeSonaAraya ( node * r, int x, char kelime[50] )
{
    node * iter = r;
    while( iter -> sonraki != NULL && iter -> sonraki -> x > x){
        iter = iter -> sonraki;
    }

    node * temp = (node *)malloc(sizeof(node));
    temp -> sonraki = iter -> sonraki;
    iter -> sonraki = temp;
    temp -> x = x;
    strcpy(temp->word, kelime);
    return r;
}
node * KokenDegistime ( node * r, int x, char kelime[50])
{
        node * temp = (node *)malloc(sizeof(node));
        temp -> x = x;
        temp -> sonraki = r;
        strcpy(temp->word, kelime);
        return temp;
}
node * EkleBasa (node * r, int x, char kelime[50])
{
    r = (node *)malloc(sizeof(node));
        r -> sonraki = NULL;
        r -> x = x;
        strcpy(r->word, kelime);
        return r;
}

void AynisiVarMi(node * root)
{
    node * iter1, * iter2, * klon;
    iter1 = root;

    //Elemanlari tek tek dongumuze aliyoruz;
    while (iter1 != NULL && iter1->sonraki != NULL)
    {
        iter2 = iter1;

        //Secilen elemani, tum liste ile karsilastiriyoruz;
        while (iter2->sonraki != NULL)
        {
            //Ayni kelimeye sahip elemanlari siliyoruz.
            if (strcmp(iter1->word, iter2->sonraki->word)==0 )
            {
                klon = iter2->sonraki;
                iter2->sonraki = iter2->sonraki->sonraki;
                //bellekte bosa yer kaplamamasi icin o alani bos birakiyoruz, siliyoruz;
                free(klon);
            }
            else //Kelimeler ayni degilse eger listemizi taramaya devam etmesini soyluyoruz;
                iter2 = iter2->sonraki;
        }
        iter1 = iter1->sonraki;
    }
}
node * EklemeYap(node * r, int x, char kelime[50])
{
    if( r==NULL) //linklist bos ise;
    {
        return EkleBasa(r, x, kelime);
    }
    if( r -> x < x) // ilk elemeandan kucukse, root degisir;
    {
        return KokenDegistime(r, x, kelime);
    }
    //Ekleyecegimiz degerden kucuk en buyuk degeri bulana kadar devam edip oraya ekleme metodu.
    return EklemeSonaAraya(r, x, kelime);
}


node * KelimeleriTara (FILE *f ) {

    char x[50];
    node * root;
    root = NULL;
    int counter=0;
    while( fscanf(f, " %s ", x) != EOF)
    {
        for(int i = 0; x[i]; i++){
            x[i] = tolower(x[i]);
        }
        counter = tekrar(x);
        root = EklemeYap    (root, counter, x);
    }
    return root;
}
int tekrar( char y[50]){
    FILE *f2;
    f2 = fopen("D:\prolab.txt","r");
    char x[50];
    int tekrar = 0;
    while( fscanf(f2, " %s ", x) != EOF)
    {
        for(int i = 0; x[i]; i++){
            x[i] = tolower(x[i]);
        }
        if(strcmp(x, y)==0){
            tekrar++;
        }
    }
    fclose(f2);
    return tekrar;
}


void bastir(node * r)
{   int i=1;
    while(r != NULL)
    {
        printf("%d. %s: %d\n",i, r -> word, r->x );
        r = r -> sonraki;
        i++;
    }
}





int main() {

	system("color a");
    FILE *dosya;
    dosya = fopen("D:\prolab.txt","r");
    node * kelime;
    kelime = NULL;
    kelime = KelimeleriTara(dosya);
    AynisiVarMi(kelime);
    bastir(kelime);
    fclose(dosya);

	return 0;
}
