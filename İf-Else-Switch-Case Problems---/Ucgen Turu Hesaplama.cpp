#include <stdio.h>
#include <math.h>
int main(){
	
	int sayi;
	int a,b,c;
	
	printf("Ucgenin kenar uzunluklarini giriniz : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a+b > c && c > abs(a-b) && a+c > b && b > abs(a-c) && b+c > a && a > abs(b-c)){
		
		printf("Bu bir ucgendir.\n");
		
			if(a == b && b == c){
				printf("Eskenar Ucgendir.");
			}
			else if(a == b && b != c){
				printf("Ikizkenar Ucgendir.");
			}
			else if(a != b && b == c){
			printf("Ikizkenar Ucgendir.");
			}
			else if(b != a && a == c){
				printf("Ikizkenar Ucgendir.");
			}
			else if(b != a && a != c){
				printf("Cesitkenar Ucgendir.");
			}
		}
		
	else{
		printf("Bu bir ucgen degildir.");
		}
		
	return 0;
}
