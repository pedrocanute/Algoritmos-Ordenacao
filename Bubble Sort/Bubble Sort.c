#include <stdio.h>
#include <time.h>

void bubble_sort(int array[], int n) {

	int temporario, trocou;

	for (int i = 0; i < n - 1; i++) {
		trocou = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				temporario = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temporario;
				trocou = 1;
			}
		}
		//Imprime estado do array a cada iteracao
		for (int k = 0; k < n; k++) {
			printf("%d ", array[k]);
		}
		printf("\n");

		if (trocou == 0) break;
	}
}

void bubble_sort_recursivo(int array[], int n) {
	// Caso base: se o tamanho for 1, ja esta ordenado
	if (n == 1) return;

	int trocou = 0;

	// Faz uma passagem completa, movendo o maior elemento para o final
	for (int j = 0; j < n - 1; j++) {
		if (array[j] > array[j + 1]) {
			int temporario = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temporario;
			trocou = 1;
		}
	}

	// Se nao houve trocas, o array ja esta ordenado
	if (trocou == 0) return;

	// Chamada recursiva para ordenar os n-1 primeiros elementos
	bubble_sort_recursivo(array, n - 1);
}

int main() {

	int array[6];
	srand(time(NULL));
	printf("Array Original:\n");
	for (int i = 0; i < 6; i++) {
		array[i] = rand() % 21;
		printf("%d ", array[i]);
	}
	printf("\n\n");
	
	printf("Bubble Sort Recursivo:\n");
	bubble_sort_recursivo(array, 6);

	printf("\n");
	printf("Array Ordenado:\n");

	for (int i = 0; i < 6; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}