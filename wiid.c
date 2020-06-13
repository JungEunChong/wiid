#include <stdio.h>

int fib(int n);
int ffib(int n);

int main() {
	int a;
	printf("a : ");
	scanf("%d", &a);

	printf("fib  : ");
	
	for(int i = 1; i <= a; i++) {	
		printf("%d ", fib(i));
	}

	printf("\nffib : ");
	
	for(int i = 1; i <= a; i++) {
		printf("%d ", ffib(i));
	}

	printf("\n");
	
	return 0;
}

int fib(int n) {
	if(n == 1 || n == 2) return 1;

	return fib(n-1) + fib(n-2);
}

int ffib(int n) {
	if(n == 1 || n == 2 || n == 3) return 1;

	return ffib(n-1) + fib(n-2);
}
