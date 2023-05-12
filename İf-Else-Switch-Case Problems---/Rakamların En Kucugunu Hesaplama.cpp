#include <stdio.h>
int main(){
	
int sayi;
int b1,b2,b3;
	
while(1){
	
printf("Sayinizi Giriniz :");
scanf("%d",&sayi);

b1 = sayi / 100;
b3 = sayi % 10;
b2 = (sayi / 10)%10; 

if(b1 != b2){
	
	if(b1 != b3){
		if(b2 != b3){
			if(b1 < b2 && b1 < b3){
	printf("\n\nSayinin en kucuk rakami sagdan 3. rakamdir.");
	break;
}
	
else if(b2 < b1 && b2 < b3){
	printf("\n\nSayinin en kucuk rakami sagdan 2. rakamdir.");
	break;
}

else if(b3 < b1 && b3 < b2){
	printf("\n\nSayinin en kucuk rakami sagdan 1. rakamdir.");
	break;
}
}

		else{
		printf("\n\nLutfen tanimli bir deger giriniz.\n\n");
		continue;
		}
}
	else{
	printf("\n\nLutfen tanimli bir deger giriniz.\n\n");
	continue;
	}
}
else{
printf("\n\nLutfen tanimli bir deger giriniz.\n\n");
continue;
}

}
	return 0;
}
