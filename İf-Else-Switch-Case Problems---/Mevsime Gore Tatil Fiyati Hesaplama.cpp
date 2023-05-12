#include <stdio.h>
int main(){
int kisi;
int tutar;
char mevsim;

printf("Hangi ayda gitmeyi dusunuyorsunuz ? :");
scanf("%c",&mevsim);

switch(mevsim){

	case 'k': {
		printf("Kac kisi gitmeyi dusunuyorsunuz ? :");
		scanf("%d",&kisi);
		tutar = kisi * 150;
		break;
	}
	
	case 'y': {
		printf("Kac kisi gitmeyi dusunuyorsunuz ? :");
		scanf("%d",&kisi);
		tutar = kisi * 250;
		printf("Toplam Borcunuz : %d\n",tutar);
		break;
	}
	
	case 's': {
		printf("Kac kisi gitmeyi dusunuyorsunuz ? :");
		scanf("%d",&kisi);
		tutar = kisi * 50;
		printf("Toplam Borcunuz : %d\n",tutar);
		break;
	}
	
	case 'i': {
		printf("Kac kisi gitmeyi dusunuyorsunuz ? :");
		scanf("%d",&kisi);
		tutar = kisi * 50;
		printf("Toplam Borcunuz : %d\n",tutar);
		break;
	}
}
	printf("Rezervasyonunuz basarili bir sekilde yapilmistir.Iyi tatiller!");
	return 0;
	
}
