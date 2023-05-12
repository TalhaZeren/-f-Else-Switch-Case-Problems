#include <stdio.h>
int main() {
	
int yas,taksit,mtv,hacim;
char cins;

printf("Aracin cinsini giriniz :  [M] veya [P] =>");
scanf("%c",&cins);	

switch(cins){
	 case 'M': {
	 case 'm':	
	 
		printf("aracin yasini giriniz :");
		scanf("%d",&yas);
		
	 	if(1 <= yas && yas <= 6){
	 	printf("2011 yili MTV tutari : 523 . 00 TL\n");
			 printf("Taksit Bedeli (MTV nin yarisi) :216 . 00 TL dir");
				}
				 
	 		 else if (6 < yas && yas <=15) {
	 				printf("2011 yili MTV tutari : 346 TL\n");
						 printf("Taksit Bedeli (MTV nin yarisi) :173 . 00 TL dir");
				}
	 	else if(yas >= 16){
	 			printf("2011 yili MTV tutari : 172 . 00 TL\n");
				 printf("Taksit Bedeli (MTV nin yarisi) :86 . 00 TL dir");
					 }
					break;
					
				 }
				 
				 case 'P': {
				 case 'p':
				printf("Aracin yasini giriniz :");
					scanf("%d",&yas);
					
					printf("Aracin hacmini giriniz : ");
					scanf("%d",&hacim);
					
					if(hacim <= 1900 && 1 <= yas && yas <= 6){
					printf("Aracinizin MTV tutari : 697 . 00 TL  \n");
						printf(" taksit bedeli : 348 . 00 TL");
				}
					else if(7<= yas && yas <= 15 && hacim <= 1900){
						printf("Aracinizin MTV tutari : 436 . 00 TL  ");
							printf(" taksit bedeli : 218 . 00 TL");
				}
				
					else if(16 <= yas && hacim <= 1900){
						printf("Aracinizin MTV tutari : 260 . 00 TL  ");
							printf(" taksit bedeli : 130 . 00 TL");
				
					}
					else if(hacim > 1900 && 1 <= yas && yas <= 6){
						printf("Aracinizin MTV tutari : 1052 . 00 TL  ");
							printf(" taksit bedeli : 526 . 00 TL");
							}	
							
					else if(7<= yas && yas <= 15 && hacim > 1900){ 
						printf("Aracinizin MTV tutari : 697 . 00 TL  ");
							printf(" taksit bedeli : 348 . 00 TL");
							}
							
					else if(yas > 16 && hacim > 1900){
						printf("Aracinizin MTV tutari : 436 . 00 TL  ");
							printf(" taksit bedeli : 218 . 00 TL");	
					}
			}
		break;
}
	return 0;
}

