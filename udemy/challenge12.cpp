#include <iostream>
using namespace std;

int *apply_all(int*, size_t, int*, size_t);
void print(int*, size_t);

void
print(int* array, size_t size)
{
	cout << "[ ";
	for (size_t i {0}; i < size; i++)
		cout << array[i] << " ";
	cout << "]" << endl;
}

int*
apply_all(int* array1, size_t array1_size, int* array2, size_t array2_size)
{
	size_t new_size = array1_size * array2_size;
	int *new_array  = new int[new_size];
	int p1 {0}, p2 {0};
	int index {0};
	for (size_t i {0}; i < array2_size; i++) {
		p2 = array2[i];
		for (size_t j {0}; j < array1_size; j++) {
			p1 = array1[j];
			new_array[index] = p1 * p2;
			index++;
		}
	}
	
	return new_array;
}

int
main(int argc, char** argv)
{
	int array1[] {1,2,3,4,5};
	int array2[] {10,20,30};

	cout << "Array 1: ";
	print(array1, 5);

	cout << "Array 2: ";
	print(array2, 3);
	
	int *results = apply_all(array1, 5, array2, 3);
	cout << "Result: ";
	print(results, 15);
	delete[] results;

	return EXIT_SUCCESS;
}

