#include <stdio.h>

void troca(int a[], int i, int j) {

	int aux = a[j];
	a[j] = a[i];
	a[i] = aux;

}

int lomuto_partition(int a[], int e, int d) {

	int pivo = a[d];
	int i = e - 1;

	for (int j = e; j < d ; j++) {
		if (a[j] <= pivo) {
			i++;
			troca(a, i, j);
		}
	}
	troca(a, i + 1, d);
	return i + 1;
}

void quick_sort(int a[], int e, int d) {
	if (e < d) {
		int q = lomuto_partition(a, e, d);
		quick_sort(a, e, q - 1);
		quick_sort(a, q + 1, d);

	}
}