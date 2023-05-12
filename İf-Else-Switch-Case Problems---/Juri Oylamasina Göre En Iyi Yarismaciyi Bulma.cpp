#include <stdio.h>
int main(){
	
float a1,a2,a3,b1,b2,b3,c1,c2,c3;
float as,bs,cs;

printf("Birinci jurinin yarismaci puanlari :");
scanf("%f %f %f",&a1,&b1,&c1);

	printf("Ýkinci jurinin yarismaci puanlari :");
	scanf("%f %f %f",&a2,&b2,&c2);

		printf("Ucuncu jurinin yarismaci puanlari :");
		scanf("%f %f %f",&a3,&b3,&c3);
		as = (a1 + a2 +a3)/3;
		bs = (b1 + b2 + b3)/3;
		cs = (c1 + c2 + c3)/3;
		
if(as < bs && bs < cs){
	printf("En iyi yarismaci 3. yarismacidi\r\n");
	printf("Ortalama = %.2f",cs);
}

else if(cs < as && as < bs){
	printf("En iyi yarismaci 2. yarismacidir\n");
	printf("Ortalama = %.2f",bs);
}

else if(bs < cs && cs < as){
	printf("En iyi yarismaci 1. yarismacidir\n");
	printf("Ortalama = %.2f",as);
}

else if(as == bs && bs == cs){
printf("En iyi yarismaci 3. yarismacidir\n");
	printf("Ortalama = %.2f",cs);
	}
	
	return 0;
}
