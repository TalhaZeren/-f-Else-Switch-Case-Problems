#include <stdio.h>
int main(){
char tur;
int kisi,otobus;										// her bir otobüs 46 yolcu almaktadýr.
float oran;

printf("Tur turunu giriniz : ");
scanf("%c",&tur);

switch(tur){
	case 'I':{
	case 'i':
	printf("Tura kac kisi katilacak?  =>> ");
	scanf("%d",&kisi);
	
	otobus = kisi / 46;
	
	if(kisi%46!=0){
		otobus += 1;
	}
	printf("\n\nBu tur icin %d adet otobus gereklidir.",otobus);
	printf("\n\nbos koltuk sayisi %d",(otobus * 46) - kisi);
	
	oran = kisi / (otobus * 46.0);
	
	printf("\n\nTurun doluluk orani %.2f",oran);
	
	if(oran < 0.6){
		printf("\n\nKarlik Derecesi => ZARAR!!");
	}
	else if(oran >= 0.6 && oran <= 0.9){
		printf("\n\nKarlik Derecesi => Karli :)");
	}
	
	else if(oran > 0.9){
		printf("Karlik Derecesi => Cok Karli :) :)");
	}
	
		break;
	}
	
	case 'D':{
	case 'd':
	printf("Tura kac kisi katilacak?  =>> ");
	scanf("%d",&kisi);
	
	otobus = kisi / 46;
	
	if(kisi%46!=0){
		otobus += 1;
	}
	
	printf("\n\nBu tur icin %d adet otobus gereklidir.",otobus);
	printf("\n\nbos koltuk sayisi %d",(otobus * 46) - kisi);
	
	oran = kisi / (otobus * 46.0);
	
	printf("\n\nTurun doluluk orani %.2f",oran);
	
	if(oran < 0.7){
		printf("\n\nKarlik Derecesi => ZARAR!!");
	}
	
	else if(oran >= 0.7 && oran <=0.9){
		printf("\n\nKarlik Derecesi => Karli :)");
	}
	
	else if(oran > 0.9){
		printf("\n\nKarlik Derecesi => Cok Karli :) :)");
	}
	
}	
}
	return 0;
}
