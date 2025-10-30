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