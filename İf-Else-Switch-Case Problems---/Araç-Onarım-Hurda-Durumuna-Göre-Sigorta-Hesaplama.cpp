#include <stdio.h>
int main(){
int sigorta,fark,onarim,kar,hurda,odeme;

printf("hasarli aracin sigorta,onarim ve hurda bedelini giriniz :");
	scanf("%d %d %d",&sigorta,&onarim,&hurda);	

	odeme = onarim + hurda;

if(odeme > sigorta){
	printf("araba perttir.\n\n");
	fark = sigorta - hurda;
	kar = onarim - fark;
	
	if(kar > 0){
		printf("kariniz %d \n\n",kar);
		}
		
		else if(kar < 0){
			printf("kar yok");
		}		
	}
	else if(odeme < sigorta){
			printf("araba onarilabilir.\n\n");
			printf("odeyeceginiz tutar : %d \n\n",onarim);
		}
		
printf("***********************************************************************************");

		return 0;	
	}
