#include <stdio.h>

void insertion_sort(int array[], int n) {

	int j, chave;

	for (int i = 0; i < n; i++) {

		chave = array[i];
		j = i - 1;

		while (j >= 0 && array[j] > chave) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = chave;
	}
}

void insertion_sort_recursivo(int a[], int n) {

	if (n <= 1) return;

	insertion_sort_recursivo(a, n - 1);

	int chave = a[n - 1];
	int j = n - 2;

	while (j >= 0 && a[j] > chave) {
		a[j + 1] = a[j];
		j--;
	}
	a[j + 1] = chave;
}