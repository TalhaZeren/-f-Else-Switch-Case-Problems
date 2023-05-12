	#include <stdio.h>
	int main(){
		
	float sure;
	float toplam,ek;
	
	printf("Sureyi giriniz :");
	scanf("%f",&sure);
	
	if(sure < 1){
		printf("Borcunuz: 5 TL");
	}
	
	else if(sure > 1 && sure < 5){
			printf("Borcunuz 20 TL");
	}
	
	else if(sure >=5 && sure <= 10){
				printf("Borcunuz: 40 TL");
	}
	
	else if(sure > 10){
		
	ek = sure - 10;
	toplam = 40 + ek * 0.5;
	
	printf("Borcunuz : %.2f",toplam);
	}
	
		return 0;
	}
