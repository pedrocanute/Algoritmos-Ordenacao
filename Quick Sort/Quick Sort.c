#include <stdio.h>

void troca(int a[], int i, int j) {

	int aux = a[j];
	a[j] = a[i];
	a[i] = aux;

}

int partition(int a[], int e, int d) {

	int pivo = a[d];
	int i = e;

	for (int j = e; j < d - 1; j++) {
		if (a[j] < pivo) {
			troca(a, i, j);
			i++;
		}
	}
	troca(a, i, d);
	return i;
}

void quick_sort(int a[], int e, int d) {
	if (e < d) {
		int q = partition(a, e, d);
		quick_sort(a, e, q - 1);
		quick_sort(a, q + 1, d);

	}
}