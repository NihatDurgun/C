#include <stdio.h>

void dizibastir(int dizi[],int n){
	int i=0;
	printf("------------------");
	printf("\n\n");
	for(;i<n;i++){
		printf("dizi[%d]:%d\n",i,dizi[i]);
	}	
}


int main(){
	int dizi[10],i=0,b=0,temp=0;
	
	for(;i<10;i++){
		dizi[i] =  (i*i) % 5;
	}	
	
	dizibastir(dizi,10);
	
	for(i=0;i<10;i++){
		for(b=i+1;b<10;b++){
			if(dizi[i] > dizi[b])
			{
			temp 	= dizi[b];
			dizi[b] = dizi[i];
			dizi[i]	= temp;
			}		
		}		
	}
	
	dizibastir(dizi,10);
	
}
