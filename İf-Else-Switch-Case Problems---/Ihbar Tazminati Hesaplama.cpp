#include <stdio.h>								/*Ýhbar Tazminatý*/ 
int main(){
	
int sure; 
float tazminat,maas,ek;

printf("toplam calisma surenizi giriniz :");
scanf("%d",&sure);
	printf("Aylik ucretinizi giriniz :");
	scanf("%f",&maas);
	
if(sure <= 6){
	printf("Ihbar suresi 14 gun\n\n");
	ek = maas / 30;
	tazminat = ek * 14;
	printf("Ihbar tazminati %.2f",tazminat);
}

else if(sure > 6 && sure <=36){
	printf("Ihbar suresi 28 gun\n\n");
	ek = maas / 30;
	tazminat = ek * 28;
	printf("Ihbar tazminati %.2f",tazminat);
}

	else if(sure > 36 && sure <=72){
	printf("Ihbar suresi 42 gun\n\n");
	ek = maas / 30;
	tazminat = ek * 42;
	printf("Ihbar tazminati %.2f",tazminat);
}

	else if(sure > 72){
	printf("Ihbar suresi 56 gun\n\n");
	ek = maas / 30;
	tazminat = ek * 56;
	printf("Ihbar tazminati %.2f",tazminat);
}

	return 0;
}
