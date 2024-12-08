#include<stdio.h>
int main(){
	float celsius, fahrenheit;
	printf("moi ban nhap do C (celsius): ");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9/5) + 32;
	printf("%.2f C = %.2f F",celsius , fahrenheit);
	return 0;
}
