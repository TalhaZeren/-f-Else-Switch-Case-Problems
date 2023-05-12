#include <stdio.h>
int main(){
	
 float y1,y2,y3;
 float y4,y5,y6;
 float y7,y8,y9;
 float ort1,ort2,ort3; 
 
 printf("1. jurinin 1yarismaci icin puanlari\n");
 scanf("%f\n",&y1);
 scanf("%f\n",&y2);
 scanf("%f\n",&y3);	
 
	printf("2. jurinin yarismaci icin puanlari\n");
	 scanf("%f\n",&y4);
	 scanf("%f\n",&y5);
	 scanf("%f\n",&y6);
	 
		printf("3. jurinin yarismaci icin puanlari\n");
		scanf("%f\n",&y7);
		scanf("%f\n",&y8);
		scanf("%f\n",&y9);
		
ort1 = (y1 + y2 + y3)/3;
ort2 = (y4 + y5 + y6)/3;
ort3 = (y7 + y8 + y9)/3;

if(ort1 > ort2 && ort1 > ort3){
	printf("En iyi yarismaci 1. yarismacidir.Ortalama puani %f dir\n\n",ort1);
}

else if(ort2 > ort1 && ort2 > ort3){
	printf("En iyi yarismaci 2. yarismacidir.Ortalama puani %f dir\n\n",ort2);
}

else if(ort3 > ort2 && ort3 > ort1){
	printf("En iyi yarismaci 3. yarismacidir.Ortalama puani %f dir\n\n",ort3);
}

printf("---------------------------------------------------------------------");	
	return 0;
}
