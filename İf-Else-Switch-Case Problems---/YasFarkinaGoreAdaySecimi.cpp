#include <stdio.h>
#include <math.h>
	int main(){
		
	int aday1,aday2,aday3;
	int secen,a,b,c;

	printf("Yasinizi giriniz :");
	scanf("%d",&secen);
			
	printf("Adaylarin yasini giriniz :");
	scanf("%d %d %d",&aday1,&aday2,&aday3);

a = fabs(secen - aday1);
b = fabs(secen - aday2);
c = fabs(secen - aday3);

printf("\n\n--------------------------------------------\n\n");

	if(a<b && b<c){
	printf("Yasiniza en yakin 1 numarali adaydir.(Yas farki %d)",a);
}
	else if(b < c && c<a){
		printf("Yasiniza en yakin 2 numarali adaydir.(Yas farki %d)",b);
	}
		else if(c<a && a<b){
			printf("Yasiniza en yakin 3 numarali adaydir.(Yas farki %d)",c);
		}
			else if(a<c && c<b){
				printf("Yasiniza en yakin 1 numarali adaydir.(Yas farki %d)",a);
			}
		else if(c<b && b<a){
			printf("Yasiniza en yakin 3 numarali adaydir.(Yas farki %d)",c);
		}
	else if(b<a && a<c){
		printf("Yasiniza en yakin 2 numarali adaydir.(Yas farki %d)",b);
	}
else if(b==a && a==c){
	printf("Hepsi Esit.Sec begen al.(Yas farki %d)",b);
}
	else if(b<a && a==c){
		printf("Ikisi esit (kucuk olaninin yas farki %d)",b);
	}
		else if(b>a && a==c){
			printf("Ikisi esit (kucuk olaninin yas farki %d)",a);
		}
			else if(b==a && a>c){
				printf("Ikisi esit (kucuk olaninin yas farki %d)",c);
			}
		else if(b==a && a<c){
			printf("Ikisi esit (kucuk olaninin yas farki %d)",b);
		}
	else if(b==c && c<a){
		printf("Ikisi esit (kucuk olaninin yas farki %d)",c);
	}
else if(b==c && c>a){
	printf("Ikisi esit (kucuk olaninin yas farki %d)",a);
}

printf("\n\n---------------------------------------------------\n");
		
	return 0;
}
