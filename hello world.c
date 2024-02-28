#include <stdio.h>

#pragma warning (disable: 4996)

int main() {
	int a = 0;
	printf("Hello World!\n");
	printf("Podaj liczbe: ");
	scanf("%d", &a);
	printf("Twoja liczba to: %d", a);

	
	return 0;
}