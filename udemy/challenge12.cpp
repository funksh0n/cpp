#include <iostream>
using namespace std;

int *apply_all(const int*, size_t, const int*, size_t);
void print(const int*, size_t);

void
print(const int* const array, size_t size)
{
	cout << "[ ";
	for (size_t i {0}; i < size; i++)
		cout << array[i] << " ";
	cout << "]" << endl;
}

int*
apply_all(const int* const array1, size_t array1_size, const int* const array2, size_t array2_size)
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
	const size_t array1_size {5};
	const size_t array2_size {3};

	int array1[] {1,2,3,4,5};
	int array2[] {10,20,30};

	cout << "Array 1: ";
	print(array1, array1_size);

	cout << "Array 2: ";
	print(array2, array1_size);
	
	int *results = apply_all(array1, array1_size, array2, array2_size);
	cout << "Result: ";
	print(results, array1_size * array2_size);
	delete[] results;

	return EXIT_SUCCESS;
}

