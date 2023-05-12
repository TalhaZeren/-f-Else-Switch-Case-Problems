#include <stdio.h>                 // Ýþþislik Maaþ Hesabý//
int main() {
	
int primgun,maas,gunluk,imaas;
char harf;	

printf("Son 3 ay kesintisiz calistiniz mi? E/H");
scanf("%c",&harf);


	switch(harf){
		case 'E': {	
		printf ("prim gun sayinizi giriniz :");
			scanf("%d",&primgun);
			
			if (primgun >= 1080){
				printf("Calisirkenki son aylik maasiniz  :\n");
				scanf("%d",&maas);
				
			gunluk = (maas)/30 *0.4;
			imaas = gunluk * 30;
			
		printf("issizlik maasiniz : %d .Issizlik odenegi alabileceginiz gunsayisi : %d",imaas,primgun);
		}
	
		else if(primgun >= 900 && primgun <= 1079){
				printf("Calisirkenki son aylik maasiniz  :");
				scanf("%d",&maas);                                                  
			gunluk = (maas)/30 *0.4;
			imaas = gunluk * 30;
			
		printf("issizlik maasiniz : %d .Issizlik odenegi alabileceginiz gunsayisi : %d",imaas,primgun);
		}
		
		else if (primgun >=600 && primgun < 900) {
				printf("Calisirkenki son aylik maasiniz :");
				scanf("%d",&maas);
				
				gunluk = (maas)/30 *0.4;
				imaas = gunluk * 30;
				
		printf("issizlik maasiniz : %d .Issizlik odenegi alabileceginiz gunsayisi : %d",imaas,primgun);
		}
		
		else if (primgun < 600){
			printf("Uzgunuz islemi devam ettiremezsniz.Cunku en az 600 gun prim odemenizin olmasi gerekir.");
		}
	break;
	}
	
		case 'H':{ 
	
		printf("Maalesef issizlik maasi odemesi alamazsiniz.\n");	
			printf("Son 3 ay kesintisiz calismaniz gerekir.");
		break;
		
	}
} 	
	return 0;
}
