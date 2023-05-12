#include <stdio.h>
int main(){
int sayi;
int b1,b2,b3,caunt = 0;

while(true){
	
	printf("3 Basamakli sayinizi giriniz (Rakamlari farkli olmali ) : ");
	scanf("%d",&sayi);
	b1 = sayi / 100;
	b3 = sayi % 10;
	b2 = (sayi / 10)%10;
	
	if(b1 != b2){
		if(b1!=b3){
			if(b2!=b3){
				if(b1 % 2 == 0){
					caunt++;
				}
				if(b2 % 2 == 0){
				caunt++;
			}
				if(b3 % 2 == 0){
				caunt++;
			}
		printf("\n\n %d kadar cift sayi vardir",caunt);
		break;
		}
		else {
		printf("Lutfen gecerli sayilar giriniz. .\n\n");
		continue;
	}
	}
	else {
		printf("Lutfen gecerli sayilar giriniz. .\n\n");
		continue;
	}
}

else {
	printf("Lutfen gecerli sayilar giriniz. .\n\n");
	continue;
	
}

}

return 0;
}
