#include <stdio.h>
int main() { 
int calisma;
int aylik;
int gunluk;
int tazminat;

printf("Toplam calisma surenizi giriniz (Ay) :");
scanf("%d",&calisma);
printf("Aylik ucretinizi giriniz : (bin):");
scanf("%d",&aylik);



if (calisma <= 6) {
	gunluk = (aylik)/30;
tazminat = 14 * gunluk;

printf("Ihbar sureniz 14 gun.Ihbar Tazminati %d dir",tazminat);

}
else if(6 < calisma && calisma <= 18){
		gunluk = (aylik)/30;
tazminat = 28 * gunluk;
printf("Ihbar sureniz 28 gun.Ihbar Tazminati %d dir",tazminat);

}
else if (18 < calisma && calisma <= 36){
			gunluk = (aylik)/30;
tazminat = 42 * gunluk;
printf("Ihbar sureniz 42 gun.Ihbar Tazminati %d dir",tazminat);
}

else if(calisma > 36){
			gunluk = (aylik)/30;
tazminat = 56 * gunluk;
printf("Ihbar sureniz 56 gun.Ihbar Tazminati %d dir",tazminat);
}





return 0;

}
