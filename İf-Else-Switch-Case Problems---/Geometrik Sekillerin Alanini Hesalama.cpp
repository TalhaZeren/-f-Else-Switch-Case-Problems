#include <stdio.h>
int main(){
char harf;
int alan,kenar,pi,ukenar;

printf("Hangi geometrik seklin alanini hesaplayacaginizi seciniz.");
scanf("%c",&harf);

switch(harf){

	case 'D':{
	case 'd':
	printf("Dairenin yaricapini giriniz :");
	scanf("%d",&kenar);
	
	pi = 3;
	alan = pi *(kenar*kenar);
	
	printf("Kenari %d olan dairenin alani %d",kenar,alan);
		break;
	}
	case 'T':{
	case 't':
	printf("Dikdortgenin kenarlarini giriniz :");
	scanf("%d %d",&kenar,&ukenar);	
	
	alan = kenar * ukenar;
	
	printf("Kenarlari %d ve %d olan dikdortgenin alani %d",kenar,ukenar,alan);
		break;
	}
	case 'K':{
	case 'k':
	printf("Karenin kenarini giriniz :");	
	scanf("%d",&kenar);
	
	alan = kenar * kenar;
	
	printf("Kenari %d olan karenin alani %d",kenar,alan);
		break;
	}
	case 'U':{
	case 'u':
		printf("Ucgenin kenarini ve yuksekligini giriniz :");
		scanf("%d %d",&kenar,&ukenar);
		
		alan = (kenar * ukenar)/2;
		
		printf("Kenari %d yuksekligi %d olan ucgenin alani %d",kenar,ukenar,alan);
	break;
	}
}
	return 0;
}
