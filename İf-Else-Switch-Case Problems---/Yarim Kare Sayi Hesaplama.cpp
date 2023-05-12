#include <stdio.h>
int main(){
	
int sayi;						/*2025*/	
int i,j;
int toplam;

printf("4 basamakli bir sayi giriniz =");
scanf("%d",&sayi);

i = sayi / 100;
j = sayi % 100;	

toplam = i + j;

if(toplam*toplam == sayi){
	printf("Girilen sayi yarim kare sayidir.");
}

else {
	printf("Girilen sayi yarimkare sayi degildir.");
}

	return 0;
}
