#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int l, int m, int r) {

	int i, j, k;

	int n1 = m - l + 1;
	int n2 = r - m;

	int* L = malloc(n1 * sizeof(int));
	int* R = malloc(n2 * sizeof(int));

	for (i = 0; i < n1; i++) {
		L[i] = a[l + i];
	}
	for (j = 0; j < n2; j++)
		R[j] = a[m + 1 + j];

	i = 0;
	j = 0;
	k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		a[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		a[k] = R[j];
		j++;
		k++;
	}
	printf("Apos merge [%d...%d]: ", l, r);
	
	for (int x = l; x <= r; x++) {
		printf("%d ", a[x]);
	}

	printf("\n");
	free(L);
	free(R);
}

void merge_sort(int a[], int l, int r) {

	if (l < r) {

		printf("Dividindo [%d...%d]\n", l, r);

		int m = l + (r - l) / 2;

		merge_sort(a, l, m);
		merge_sort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

int main() {
	int arr[] = { 38, 27, 43, 10 };
	int n = 4;

	printf("Array inicial: ");
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\n\n");

	merge_sort(arr, 0, n - 1);

	printf("\nArray final: ");
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
