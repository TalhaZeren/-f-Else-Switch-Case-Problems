#include <stdio.h>
int main(){
char cesit;
float urun;
float odeme;
	
printf("Hangi Urunden almak istiyosunuz?\n\nTransistor = T veya t tuslayin\n\nDirenc = D veya d tuslayin\n\nKondasator =  K veya k tuslayin\n\nSeciminiz : ");
scanf("%c",&cesit);

switch(cesit){
	
	case 'T':
	case 't':	
	printf("Ne kadarlik transistor istiyorsunuz?\nGiriniz :");
	scanf("%f",&urun);
	
		if(urun > 1000){
		odeme = urun - (urun * 0.1);
		printf("Odeme = %.2f",odeme);
		}
		
		else if(urun > 0 && urun<= 1000){
			printf("Odeme = %.2f",urun);
		}
	break;
	
	case 'D':
	case 'd':	
	printf("Ne kadarlik direnc istiyorsunuz?\nGiriniz :");
	scanf("%f",&urun);
	
		if(urun > 100){
		odeme = urun - (urun * 0.05);
		printf("Odeme = %.2f",odeme);
		}
		
		else if(urun > 0 && urun<= 100){
			printf("Odeme = %.2f",urun);
		}
	
	break;
	
	case 'K':
	case 'k':	
	printf("Ne kadarlik kondansator istiyorsunuz?\nGiriniz :");
	scanf("%f",&urun);
	
		if(urun > 500){
		odeme = urun - (urun * 0.08);
		printf("Odeme = %.2f",odeme);
		}
		
		else if(urun > 0 && urun<= 500){
			printf("Odeme = %.2f",urun);
		}
	
		break;	
}	
	
	
	return 0;
}
