#include <stdio.h>
int main(){
float ic,dis,ort;

	printf("Aracin sehir ici yakit tuketimini giriniz : ");
	scanf("%f",&ic);
		printf("Aracin sehir disi yakit tuketimini giriniz : ");
		scanf("%f",&dis);
		
 ort = ic * 0.55 + dis * 0.45;
 
 if(ort < 3.0){
 	printf("Ortalama Yakit Tuketimi %.2f \n\n",ort); 
 	printf("Yakit Tuketim Sinifi => 'Cok Az' ");
 }
 
else if(ort >= 3.0 && ort < 6.0){
	printf("Ortalama Yakit Tuketimi %.2f \n\n",ort);
 	printf("Yakit Tuketim Sinifi => 'Ekonomik' ");
}

else if(ort >= 6.0 && ort < 8.0){
	printf("Ortalama Yakit Tuketimi %.2f \n\n",ort);
 	printf("Yakit Tuketim Sinifi => 'Fazla' ");
}

else if(ort >= 8.0){
	printf("Ortalama Yakit Tuketimi %.2f \n\n",ort);
 	printf("Yakit Tuketim Sinifi => 'Cok Fazla' ");
}

	return 0;
	
}
