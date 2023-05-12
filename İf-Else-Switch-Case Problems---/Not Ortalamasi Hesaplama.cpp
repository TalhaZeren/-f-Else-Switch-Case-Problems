#include <stdio.h>
int main(){ 

int ogrencisayisi = 0;
int toplam = 0;
float ortalama;
int notu;

printf("notu giriniz : ");
scanf("%d",&notu);

while(notu =! -1) {
	
toplam += notu; 
ogrencisayisi++;

printf("Notu giriniz. Solandýrmak icin -1 tuslayiniz :");
scanf("%d",&notu);
	
}

if(ogrencisayisi =! 0 ){
 
ortalama = toplam / ogrencisayisi;
printf("Not Ortalamaniz %f",ortalama);
}

return 0;
}
