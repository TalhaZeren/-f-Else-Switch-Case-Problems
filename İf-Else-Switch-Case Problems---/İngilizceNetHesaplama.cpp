#include <stdio.h>
int main() {
	int dogrusayisi;
 	int ysayisi;
	float net;
	
	printf("Dogru Sayisini Giriniz :");
	scanf("%d",&dogrusayisi);
		printf("Yanlis Sayisini Giriniz :");
	scanf("%d",&ysayisi);
	
	net = dogrusayisi - (ysayisi)/4.0;
	if (net >= 70){
		printf("upper!");

	}
	
	else if (50 <= net && net < 70) {
		printf("Net sayisiniz %.2f    Kurunuz: Intermediate\n",net);
		
	}
	else if(30 <= net && net < 50){
		printf("Net sayiniz %.2f    Kurunuz : Preintermediate \n",net);
		
	}
	else if(10 <= net && net < 30) {
		printf("Net saiyiniz %.2f Kurunuz :  Elementary\n",net);
		
	}
	else{
		printf("Net sayiniz %.2f     Kurunuz: Beginner :(\n)",net);
		printf("ingilizce dersi almak icin tiklayiniz : http.wwwasjhdasdas.com");
	}
	
	
	
	
	return 0;
	
}
