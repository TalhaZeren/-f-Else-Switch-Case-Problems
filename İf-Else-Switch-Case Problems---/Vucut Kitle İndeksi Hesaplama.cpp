#include <stdio.h>
int main(){
char cinsiyet;
float kilo,boy,index;

	printf("Boyunuzu(metre),Kilonuzu(kg) ve Cinsiyetinizi Giriniz :");
	scanf("%f %f %c",&boy,&kilo,&cinsiyet);
	
	index = kilo / (boy*boy);
	
switch(cinsiyet){
	case 'K':{
	case 'k':
	if(index < 19.1){
		printf("Zayifsiniz Sagliginiz Riskli !");
		}
		else if(19.1 <= index && index <= 25.8){
			printf("Normalsiniz.Risk Yoktur.");
		}
		else if(25.9 <= index && index <= 32.2){
			printf("Sismanlik sinirindasiniz ya da sismansiniz.,(Riskli)");
		}
		else if(index >= 32.3){
			printf("Obezite.Ciddi derecede riskli");
		}
	
		break;
	case 'E':{
	case 'e':
		if(index < 20.7){
		printf("Zayifsiniz Sagliginiz Riskli !");
		}
		else if(20.7 <= index && index <= 26.4){
			printf("Normalsiniz.Risk Yoktur.");
		}
		else if(26.5 <= index && index <= 31.1){
			printf("Sismanlik sinirindasiniz ya da sismansiniz.,(Riskli)");
		}
		else if(index >= 31.2){
			printf("Obezite.Ciddi derecede riskli");
			}
		}
	}
}
	
	return 0;
}
