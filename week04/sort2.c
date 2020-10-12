#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_SIZE	1000

void print(int a[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if ((i % 5) == 0)
		{
			printf("\n");
		}
		printf("%i, ", a[i]);
	}
}

void insertionSort(int a[], int n)
{
	for(int i = 1; i < n; i++)
	{
		int j = i - 1;
		int key = a[i];
		while((j >= 0) && (a[j] > key))
		{
			a[j + 1] = a[j];
			j--;
		}	
		a[j + 1] = key;
	}
}

void merge(int a[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	// Create temp arrays
	int L[n1];
	int R[n2];

	// Copy data to temp arrays L[] and R[]
	for(int i = 0; i < n1; i++)
	{
		L[i] = a[l + i];
	}
	for(int j = 0; j < n2; j++)
	{
		R[j] = a[m + 1 + j];
	}

	// Merge the temp arrays back into a[l..r]
	int i = 0; // counter for first subarray
	int j = 0; // counter for second subarray
	int k = l; // counter for merged subarray
	while((i < n1) && (j < n2))
	{
		if (L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy remaining elements of L[], if there are any
	while(i < n1)
	{
		a[k] = L[i];
		i++;
		k++;
	}

	// Copy remaining elements of R[], if there are any
	while(j < n2)
	{
		a[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int a[], int l, int r)
{
	if (l < r)
	{
		// Same as (l + r) / 2
		// This is done to avoid overflow for large l and r.
		int m = l + (r - l) / 2;

		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);

		merge(a, l, m, r);
	}
}

void quicksort(int a[], int l, int r)
{
	if (l < r)
	{
		// pivot = l;
		int i = l;
		int j = r;

		while(i < j)
		{
			while(a[i] <= a[l] && i < r)
			{
				i++;
			}

			while(a[j] > a[l])
			{
				j--;
			}

			if (i < j)
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

		int temp = a[l];
		a[l] = a[j];
		a[j] = temp;
		quicksort(a, l, j - 1);
		quicksort(a, j + 1, r);
	}
}

int main(int argc, char const *argv[])
{
	int a[ARRAY_SIZE];

	srand(time(0));
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		a[i] = rand() % 1000;
	}

	clock_t  start = clock();

	printf("Before sorting:");
	print(a, ARRAY_SIZE);
	insertionSort(a, ARRAY_SIZE);
	// mergeSort(a, 0, ARRAY_SIZE - 1);
	//quicksort(a, 0, ARRAY_SIZE - 1);
	printf("\n\nAfter sorting:");
	print(a, ARRAY_SIZE);

	clock_t end = clock();

	double time = (double) (end - start);

	printf("\nSorting time: %f\n", time);

	/*
	start = clock();
	
	//mergeSort(a, 0, ARRAY_SIZE - 1);
	//quicksort(a, 0, ARRAY_SIZE - 1);
	
	end = clock();

	time = (double) (end - start);

	printf("\nSorting time: %f\n", time);
	*/

	return 0;
}