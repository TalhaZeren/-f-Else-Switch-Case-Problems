#include <stdio.h>
int main(){
	
int sayi,carpim1,carpim2;
int i,j,a,s;

printf("4 basamakli bir sayi giriniz =");
scanf("%d",&sayi);

i = sayi % 100;
s = sayi / 100;
a = ((i % 10) * 10) + (i / 10);
j = ((s % 10) * 10 + (s / 10));

carpim1 = i * s;
carpim2 = a * j;

if(carpim1 == carpim2){
	printf("Girilen sayi ters yuz bir sayidir\n\n");
}
else {
	printf("Girilen sayi tersyüz  bir sayi degildir.\n\n");
}

printf("************************************************************");
	
	return 0;	
}
