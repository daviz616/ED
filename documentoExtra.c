#include<stdio.h>
#include<stdlib.h>



int main(){
	int n;
	printf("Introduce un número entero: ");
	scanf("%d", &n);
	
	if (n % 2 == 0){
	printf("Es número par");
	}
	else printf ("El número es impar");

	return 0;
}

