#include <stdio.h>
int main(){
	
char tur;
int sure;

printf("Calisan Turu (Memur ya da Diger) : ");
scanf("%c",&tur);

switch(tur){
	
	case 'M':{
	case 'm':
	printf("Toplam calisma surenizi giriniz (Ay):");
	scanf("%d",&sure);
	if(sure < 12){
		printf("izin hakki verilmemektedir.Calisma suresi %d Ay = %.2f yil eder.",sure,sure/12.0);
	}
	
	else if(12 <= sure && sure <=120){
		printf("20 gun izin alabilirsiniz. calisma suresi %d Ay = %.2f yil eder.",sure,sure/12.0);
	}
	
	else if(sure > 120){
		printf("30 gun izin alabilirsiniz. calisma suresi %d Ay = %.2f yil eder.",sure,sure/12.0);
	}
		break;
	}
	

	case 'D':{
	case 'd':	
	
		printf("Toplam calisma surenizi giriniz :");
		scanf("%d",&sure);
		if(sure < 12){
		printf("izin hakki verilmemektedir.Calisma suresi %d Ay = %.2f yil eder.",sure,sure/12.0);
	}
	
			else if(12 <= sure && sure <=120){
			printf("14 gun izin alabilirsiniz. calisma suresi %d Ay = %.2f yil eder.",sure,sure/12.0);
		}
		
		else if(120<=sure && sure < 180){
		printf("20 gun izin alabilirsiniz. calisma suresi %d Ay = %.2f yil eder.",sure,sure/12.0);	
	}
	
	else if(sure >= 180){
		printf("26 gun izin alabilirsiniz. calisma suresi %d Ay = %.2f yil eder.",sure,sure/12.0);
	}
		break;
}
}
	return 0;
}
