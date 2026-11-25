#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int a[100];
	int n;
	printf("ВВЕДИТЕ ДЛИНУ МАССИВА: ");
	scanf("%d", &n);
	printf("");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	long int product = 1;

	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			int position = i + 1;
			product *= position;
		}
	}
	printf("произведение порядковых номеров: %ld", product);

	printf("\nЭЛЕМЕНТЫ МАССИВА\n");
	for (int i = 0; i < n; i++) {
		printf(" %d", a[i]);
	}
	return 1;
}