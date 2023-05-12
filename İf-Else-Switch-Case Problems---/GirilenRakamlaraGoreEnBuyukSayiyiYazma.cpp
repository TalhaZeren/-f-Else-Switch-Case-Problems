#include <stdio.h>
int main(){
int sayi;
int b1,b2,b3,i,temp;
int toplam = 0;

while(1){
	printf("Sayiyi Giriniz (En fazla 3 basamakli olmali) :");
	scanf("%d",&sayi);
	temp = sayi;
	for(i=0;sayi>=1;i++){
		sayi = sayi / 10;
	}
	if(i == 3){
		sayi = temp;
		b1 = sayi / 100;
		b2 = (sayi / 10)%10;
		b3 = sayi % 10;
		
			if(b1 > b2 && b1 < b3){
			sayi = b3 * 100 + b1 * 10 + b2;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
			else if(b2 > b1 && b2 < b3){
					sayi = b3 * 100 + b2 * 10 + b1;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
				else if(b1 > b3 && b1 < b2){
					sayi = b2 * 100 + b1 * 10 + b3;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
				else if(b2 > b3 && b2 < b1){
					sayi = b1 * 100 + b2 * 10 + b3;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
				else if(b3 > b1 && b3 < b2){
					sayi = b2 * 100 + b3 * 10 + b1;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
				else if(b3 > b2 && b3 < b1){
					sayi = b1 * 100 + b3 * 10 + b2;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
			else if(b1==b2 && b2 < b3){
					sayi = b3 * 100 + b1 * 10 + b2;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
			else if(b1 == b3 && b3 < b2){
					sayi = b2 * 100 + b3 * 10 + b1;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
			else if(b2 == b3 && b3 < b1){
					sayi = b1 * 100 + b3 * 10 + b2;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
			else if(b2 == b3 && b2 > b1){
					sayi = b2 * 100 + b3 * 10 + b1;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
			else if(b1 == b3 && b1 > b2){
					sayi = b1 * 100 + b3 * 10 + b2;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
			else if(b1 == b2 && b1 > b3){
					sayi = b1 * 100 + b2 * 10 + b3;
			printf("\n\nYazilabilecek en buyuk sayi %d olur",sayi);
			break;
			}
			
			else if(b1 == b2 && b1 == b3){
					sayi = b1 * 100 + b2 * 10 + b3;
			printf("\n\nYazilabilecek en buyuk sayi %d olur.Sayi ayni olur.Baska bir sayi yaz.\n\n",sayi);
			continue;
			}
	}
	
	else if(i ==2){
	sayi = temp;		//Bu önemli !!
	b1 = sayi / 10;
	b2 = sayi % 10;
	
			if (b1 > b2){
			sayi = b1 * 10 + b2;
			printf("\n\nYazilabilecek Sayilarin En Buyugu %d Olur.",sayi);
			break;
			}
			
			else if(b2 > b1){
			sayi = b2 * 10 + b1;
			printf("\n\nYazilabilecek Sayilarin En Buyugu %d Olur.",sayi);
			break;
			}
			
				else if(b2 == b1){
			sayi = b2 * 10 + b1;
			printf("\n\nYazilabilecek baska bir sayi olmaz Sayimiz yine %d dir.Lutfen geri don.\n\n",sayi);
			continue;
			}
}

	else if(i == 1){
	sayi = temp;
	printf("\n\nTek basamktir.Yazilacak sayi yine %d dir.Baska bir sayi yazilamaz.Lutfen Geri don.\n\n",sayi);
	continue;
	}
	
	else{
		printf("\n\nLutfen tanimli bir deger giriniz.\n\n");
		continue;
	}
	
}	// Loop Scope Block;
	return 0;
}
