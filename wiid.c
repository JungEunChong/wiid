#include <stdio.h>

int fib(int n);

int main() {
	int a;
	printf("a : ");
	scanf("%d", &a);
	
	for(int i = 0; i <= a; i++) {	
		printf("%d ", fib(i));
	}

	return 0;
}

int fib(int n) {
	if(n == 0 || n == 1) return 1;

	return fib(n-1) + fib(n-2);
}
