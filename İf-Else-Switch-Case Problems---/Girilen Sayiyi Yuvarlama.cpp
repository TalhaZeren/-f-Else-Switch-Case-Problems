#include <stdio.h>
int main(){
	
int sayi,temp;

printf("5 Basamakli Bir Sayi giriniz : ");
scanf("%d",&sayi);

sayi = sayi / 100;
temp = sayi % 10;

if(temp >=5 && temp < 9){
sayi = sayi / 10;
sayi += 1;
sayi = sayi * 1000;
printf("Sayinin Yuvarlanmis sekli %d dir.",sayi);
}	
 
else if(temp >=0 && temp < 5){
sayi = sayi / 10;
sayi = sayi * 1000;
printf("Sayinin Yuvalanmis hali %d dir ",sayi);	
}
		
	return 0;
}
