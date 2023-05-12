#include <stdio.h>
int main(){
float ic1,ic2,dis1,dis2,ic3,dis3;
float ort1,ort2,ort3;	

printf("Birinci aracin sehir ici ve disi tuketim miktarini giriniz :");
scanf("%f %f",&ic1,&dis1);	

	printf("Ikinci aracin sehir ici ve disi tuketim miktarini giriniz :");
	scanf("%f %f",&ic2,&dis2);
		
		printf("Ucuncu aracin sehir ici ve disi tuketim miktarini giriniz :");
		scanf("%f %f",&ic3,&dis3);	
		
ort1 = ic1 * 0.55 + dis1 * 0.45;
ort2 = ic2 * 0.55 + dis2 * 0.45;
ort3 = ic3 * 0.55 + dis3 * 0.45;

printf("\n\n----------------------------------------\n\n");

if(ort1 < ort2 && ort2 < ort3){
	printf("En az yakit harcayan arac 1. aractir.\n\n Ortalama yakit tuketimi %.2f",ort1);
}

else if(ort2 < ort1 && ort1 < ort3){
	printf("En az yakit harcayan arac 1. aractir.\n\n Ortalama yakit tuketimi %.2f",ort1);
}

else if(ort1 < ort3 && ort3 < ort2){
	printf("En az yakit harcayan arac 1. aractir.\n\n Ortalama yakit tuketimi %.2f",ort1);
}

else if(ort3 < ort1 && ort1 < ort2){
	printf("En az yakit harcayan arac 1. aractir.\n\n Ortalama yakit tuketimi %.2f",ort1);
}

else if(ort3 < ort2 && ort2 < ort1){
	printf("En az yakit harcayan arac 1. aractir.\n\n Ortalama yakit tuketimi %.2f",ort1);
}

else if(ort2 < ort3 && ort3 < ort1){
	printf("En az yakit harcayan arac 1. aractir.\n\n Ortalama yakit tuketimi %.2f",ort1);
}
		
	return 0;
}
