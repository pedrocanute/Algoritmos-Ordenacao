#include <stdio.h>
//#include <time.h>


int busca_binaria(int array[], int x, int left, int right) {

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (array[mid] == x) {
			return mid;
		}
		if (array[mid] < x)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}


int main() {
	
	int array[100], left = 0, right = 99;
	//srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		array[i] = i;                      //rand() % 101;
		printf("%d ", array[i]);
	}

	printf("\nIndice %d\n", busca_binaria(array, 32, left, right));


	return 0;
}