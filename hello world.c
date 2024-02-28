#include <stdio.h>

#pragma warning (disable: 4996)

int main() {
	int a = 0;
	printf("Hello World!\n");
	printf("Podaj liczbe: ");
	scanf("%d", &a);
	printf("Twoja liczba to: %d", a);
	
	int b;
	printf("Podaj 2 liczbe: ");
	scanf("%d", &b);
	printf("Twoja liczba to: %d", b);
	int c;
	c = a*b;
	printf("Iloczyn tych liczb to: %d", c);	
	
	
	return 0;
}