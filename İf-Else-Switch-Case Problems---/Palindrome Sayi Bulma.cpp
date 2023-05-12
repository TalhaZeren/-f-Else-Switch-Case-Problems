#include <stdio.h>
int main () {

int n;
int r;
int p = 0;
int end;

	printf("Palindrome kontrolu yapacaginiz sayiyi giriniz : ");
				scanf("%d",&n);
	end = n;
while(n > 0){
	
r = n % 10;
	p = (p * 10) + r;
n = n/10;
}

if (end == p){
	
	printf("sayiniz polindrome dur");
	
}
	else{

	printf("sayiniz plindrome degildir.");	
}
	return 0;
}
