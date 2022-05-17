#include <stdio.h>
int TekSayBul(int dizi[], int x){
	if(x<0)
	return 0;
	
	if(dizi[x-1] % 2!= 0)
	return TekSayBul(dizi, x-1) + 1;
	 
	else
    return TekSayBul(dizi, x-1);
}
int main(){
	int dizi[100];
	int x, i;
	printf("Lütfen dizinin eleman sayisini giriniz:");
	scanf("%d", &x);
	
	for(i=0; i<x; i++){
		printf("dizi[%d]:", i);
		scanf("%d", &dizi[i]);}
		
	printf("%d", TekSayBul(dizi, x));
	return 0;
}
