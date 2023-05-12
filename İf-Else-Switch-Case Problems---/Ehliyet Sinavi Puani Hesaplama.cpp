#include <stdio.h>
int main() {
	
int trafik,tp;
int motor;
int yardim;
float mp,yp;

printf("trafik yanlis sayisini giriniz :");
	scanf("%d",&trafik);
	
printf("motor yanlis sayisini giriniz :");
	scanf("%d",&motor);
	
printf("yardim yanlis sayisini giriniz :");
	scanf("%d",&yardim);

	tp = 100 - 2 * trafik;
	mp = 100 - 2.5 * motor;
	yp = 100 - 3.3 * yardim;
	
	if(mp > 70 && tp > 70 && yp > 70) {
		
		printf("Sinava katilabilirsiniz.");
	}
	
	else {
		printf("Uzgunuz sinava katilamazsiniz.");
		
	}

	return 0;
	
}
