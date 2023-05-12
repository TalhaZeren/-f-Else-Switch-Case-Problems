#include <stdio.h>
int main(){
	
int sayi;
int toplam,kup;
int a,b,c,d,yedek,temp;

printf("4 Basamakli Sayiyi giriniz :");
scanf("%d",&sayi);

a = sayi / 1000;
d = sayi % 10;

	temp = sayi % 100;
	c = temp / 10;
	
			yedek = sayi / 100,
			b = yedek % 10;
			
			toplam = a+b+c+d;
			kup = toplam * toplam * toplam;

if(kup == sayi){
	printf("Girdiginiz sayi kupunu dolduran sayidir.");	
}

else { 
printf("Girdiginiz sayi kupunu dolduran bir sayi degildir.");

}
	
	
	return 0;
}
