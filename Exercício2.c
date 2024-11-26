#include <stdio.h>
//Maria Luiza de Matos Ribeiro
int fibonacci(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int main() {
	int n, resultado;
	printf("Digite o valor de n (termo da sC)rie de Fibonacci que deseja calcular): ");
	scanf("%d", &n);
	if (n < 0) {
		printf("NC:mero invC!lido! Por favor, insira um nC:mero inteiro nC#o negativo.\n");
		return 1;
	}
	resultado = fibonacci(n);
	printf("O %d-C)simo termo da sC)rie de Fibonacci C): %d\n", n, resultado);
	return 0;
}