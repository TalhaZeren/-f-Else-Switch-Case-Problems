#include <stdio.h>
int main (){
int yas;
float vki;	// Vücut kitle indeksi;
float kilo;
float boy;

printf("Adayin yasini girinz : \n");
scanf("%d",&yas);

if (yas >=13 && yas <= 17){
	
	printf("Adayin kilosunu giriniz : \n\n");
	scanf("%f",&kilo);
		printf("Adayin boyunu giriniz : \n\n");
		scanf("%f",&boy);
			
printf("-----------------------------------------------\n\n");

vki = (kilo)/(boy * boy);

	if(vki >= 18.50 && vki <= 24.99){
		printf("Vucut kitle indeksi ==>> %.2f \n\n",vki);
	printf("Tebrikler!!! Askeri Liseye girebilirsiniz.\n");	
		
	}
	else{
		printf("Askeri liseye giremezsiniz. :( \n)");
	}
	
	}
	else {
		printf("Askeri liseye giremezsiniz. :( \n)");
		
	}
	
	return 0 ;
	
}
