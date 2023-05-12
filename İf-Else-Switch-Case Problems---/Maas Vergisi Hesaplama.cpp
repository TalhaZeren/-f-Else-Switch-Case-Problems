#include <stdio.h>
int main(){
float maas,net,yillikvergi;
float yillikmaas,aylikvergi;
printf("Brut Aylik Gelirinizi Giriniz :");
scanf("%f",&maas);
if(maas > 0 && maas <= 10700){
	yillikmaas = maas * 12;
		aylikvergi = maas * 0.15;
			yillikvergi = aylikvergi * 12;
		    	net = maas - aylikvergi;
		   		printf("Toplam Yillik Geliriniz : %.2f\n\n",yillikmaas);
		   	printf("Odemeniz Gereken Toplam Vergi : %.2f\n\n",yillikvergi);
		printf("Her Ay Gelirinizden Kesilecek Vergi : %.2f\n\n",aylikvergi);
	printf("Vergisi Kesilmis Net Aylik Geliriniz : %.2f\n\n",net);

}
else if(maas > 10700 && maas <= 26000){
	yillikmaas = maas * 12;
		aylikvergi = 1650 + (maas - 10700)*0.20;
			yillikvergi = aylikvergi * 12;
	    		net = maas - aylikvergi;
				printf("Toplam Yillik Geliriniz : %.2f\n\n",yillikmaas);
			printf("Odemeniz Gereken Toplam Vergi : %.2f\n\n",yillikvergi);
	    printf("Her Ay Gelirinizden Kesilecek Vergi : %.2f\n\n",aylikvergi);
	printf("Vergisi Kesilmis Net Aylik Geliriniz : %.2f\n\n",net);
	}
else if(maas > 26000 && maas <= 94000 ){
	yillikmaas = maas * 12;
		aylikvergi = 4665 + (maas - 26000)*0.27;
			yillikvergi = aylikvergi * 12;
	    		net = maas - aylikvergi;
				printf("Toplam Yillik Geliriniz : %.2f\n\n",yillikmaas);
			printf("Odemeniz Gereken Toplam Vergi : %.2f\n\n",yillikvergi);
	    printf("Her Ay Gelirinizden Kesilecek Vergi : %.2f\n\n",aylikvergi);
	printf("Vergisi Kesilmis Net Aylik Geliriniz : %.2f\n\n",net);
		
	}
else if(maas > 94000){
	yillikmaas = maas * 12;
		aylikvergi = maas * 0.35;
			yillikvergi = aylikvergi * 12;
	    		net = maas - aylikvergi;
				printf("Toplam Yillik Geliriniz : %.2f\n\n",yillikmaas);
			printf("Odemeniz Gereken Toplam Vergi : %.2f\n\n",yillikvergi);
	    printf("Her Ay Gelirinizden Kesilecek Vergi : %.2f\n\n",aylikvergi);
	printf("Vergisi Kesilmis Net Aylik Geliriniz : %.2f\n\n",net);
	}
	
	return 0;
}
