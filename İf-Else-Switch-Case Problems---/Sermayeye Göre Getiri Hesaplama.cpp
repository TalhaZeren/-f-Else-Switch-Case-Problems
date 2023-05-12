#include <stdio.h>
int main(){
int y1,g1,y2,g2,y3,g3,tp1,tp2,tp3;
int kar1,kar2,kar3;
printf("Birincinin sermayesi ve yillik getirisi : ");
scanf("%d %d",&y1,&g1);
printf("Ikincinin sermayesi ve yillik getirisi : ");
scanf("%d %d",&y2,&g2);
printf("Ucuncunun sermayesi ve yillik getirisi : ");
scanf("%d %d",&y3,&g3);

tp1 = g1 * 15;
tp2 = g2 * 15;
tp3 = g3 * 15;

kar1 = tp1 - y1;
kar2 = tp2 - y2;
kar3 = tp3 - y3;

if(kar1 < kar2 && kar2 < kar3){
	printf("En karli yatirim 3. yatirimdir. Toplam getiri %d , net kar %d ",tp3,kar3);
}

else if(kar2 < kar1 && kar1 < kar3){
	printf("En karli yatirim 3. yatirimdir. Toplam getiri %d , net kar %d ",tp3,kar3);
}

else if(kar1 < kar3 && kar3 < kar2){
	printf("En karli yatirim 2. yatirimdir. Toplam getiri %d , net kar %d ",tp2,kar2);
}

else if(kar2 < kar3 && kar3 < kar1){
	printf("En karli yatirim 1. yatirimdir. Toplam getiri %d , net kar %d ",tp1,kar1);
}

else if(kar3< kar2 && kar2 < kar1){
	printf("En karli yatirim 1. yatirimdir. Toplam getiri %d , net kar %d ",tp1,kar1);
}

else if(kar3 < kar1 && kar1 < kar2){
	printf("En karli yatirim 2. yatirimdir. Toplam getiri %d , net kar %d ",tp2,kar2);
}


printf("\n\n\n...");
	
	return 0;
}
