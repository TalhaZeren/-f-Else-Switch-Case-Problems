#include <stdio.h>
int main(){
	
	float basarinot,sinifort,stsapma,stnot;
	
	printf("Basari Notu ,Sinif Ortalamsi ve standart sapmayi giriniz : ");
	scanf("%f %f %f",&basarinot,&sinifort,&stsapma);
	
	stnot = (basarinot - sinifort)/stsapma;
	
	if(stnot >=2){
		printf("Harf Notu A Standart Not = %.2f",stnot);
	}
	
	else if(stnot>=1 && stnot<2){
		printf("Harf Notu B Standart Not = %.2f",stnot);
	}
		
	else if(stnot>=0 && stnot<1){
		printf("Harf Notu C Standart Not = %.2f",stnot);
	}
		
	else if(stnot<0){
		printf("Harf Notu F Standart Not = %.2f",stnot);
	}
	
	return 0;
}
