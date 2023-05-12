#include <stdio.h>
int main(){											//					---------------------------------------------------- 
char cesit;																/* A veya a kaset isteyenlere birim fiyat =>> 1 TL*/
int sayi,fiyat;															/*	B veya b kaset isteyenlere birim fiyat =>> 2 TL*/
printf("Hangi Kasetten Istiyorsunuz? \nGiriniz :");						/*	C veya c kaset isteyenlere birim fiyat =>> 3 TL	*/
scanf("%c",&cesit);														/*	D veya d kaset isteyenlere birim fiyat =>> 3 TL*/															
switch(cesit){										//					-----------------------------------------------------
	case 'A':{
	case 'a':
		printf("kac tane istiyorsunuz ?\nGiriniz :");
		scanf("%d",&sayi);
		fiyat = sayi * 1;
		break;
	}
	case 'B':{
	case 'b':
		printf("kac tane istiyorsunuz ?\nGiriniz :");
		scanf("%d",&sayi);
		fiyat = sayi * 2;
		break;
	}
	case 'C':{
	case 'c':
		printf("kac tane istiyorsunuz ?\nGiriniz :");
		scanf("%d",&sayi);
		fiyat = sayi * 3;
		break;
	}
	case 'D':{
	case 'd':
		printf("kac tane istiyorsunuz ?\nGiriniz :");
		scanf("%d",&sayi);
		fiyat = sayi * 4;
		break;
	}
}
printf("\nOdemeniz gereken tutar %d \n",fiyat);

	
	return 0;
}
