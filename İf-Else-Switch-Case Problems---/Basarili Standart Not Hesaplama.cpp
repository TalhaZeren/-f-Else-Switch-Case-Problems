#include <stdio.h>
int main(){
	
float n1,n2,n3,sort1,sort2,sort3;
float stsap1,stsap2,stsap3;
float netnot1,netnot2,netnot3;

printf("birinci dersin basari notu,sinif ortalamasi ve sapmayi giriniz :");
scanf("%f %f %f",&n1,&sort1,&stsap1);
	printf("Ikinci dersin basari notu,sinif ortalamasi ve sapmayi giriniz :");
	scanf("%f %f %f",&n2,&sort2,&stsap2);
		printf("Ucuncu dersin basari notu,sinif ortalamasi ve sapmayi giriniz :");
		scanf("%f %f %f",&n3,&sort3,&stsap3);
		
printf("\n\n-------------------------------\n\n");

netnot1 = (n1 - sort1)/stsap1;
netnot2 = (n2 - sort2)/stsap2;
netnot3 = (n3 - sort3)/stsap3;	

if(netnot1 < netnot2 && netnot2 < netnot3){
	printf("En basarili olunan ders 3. derstir.\n\n Standart Not : %.2f",netnot3);
}

else if(netnot1 < netnot1 && netnot1 < netnot3){
	printf("En basarili olunan ders 3. derstir.\n\n Standart Not : %.2f",netnot3);
}

else if(netnot1 < netnot3 && netnot3 < netnot2){
	printf("En basarili olunan ders 2. derstir.\n\n Standart Not : %.2f",netnot2);
}

else if(netnot3 < netnot1 && netnot1 < netnot2){
	printf("En basarili olunan ders 2. derstir.\n\n Standart Not : %.2f",netnot2);
}

else if(netnot3 < netnot2 && netnot2 < netnot1){
	printf("En basarili olunan ders 1. derstir.\n\n Standart Not : %.2f",netnot1);
}

else if(netnot2 < netnot3 && netnot3 < netnot1){
	printf("En basarili olunan ders 1. derstir.\n\n Standart Not : %.2f",netnot1);
}
	

	return 0;
}

