#include <stdio.h>

int fib(int n);

int main() {
	int a;
	printf("a : ");
	scanf("%d", &a);
	
	for(int i = 1; i <= a; i++) {	
		printf("%d ", fib(i));
	}

	printf("\n");
	
	return 0;
}

int fib(int n) {
	if(n == 1 || n == 2) return 1;

	return fib(n-1) + fib(n-2);
}
