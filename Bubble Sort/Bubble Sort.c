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
		for (int k = 0; k < n; k++) {
			printf("%d ", array[k]);
		}
		printf("\n");
		if (trocou == 0) break;
	}

	

}

int main() {

	int array[6];
	srand(time(NULL));
	printf("Array Original:\n");
	for (int i = 0; i < 6; i++) {
		array[i] = rand() % 21;
		printf("%d ", array[i]);
	}
	printf("\n");
	bubble_sort(array, 6);

	printf("\n\n");
	printf("Array Ordenado:\n");

	for (int i = 0; i < 6; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}