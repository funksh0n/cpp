#include <iostream>
using namespace std;

void print_array(int[], size_t);
void set_array(int[], size_t, int);

void
print_array(int array[], size_t size)
{
	for (size_t i {0}; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void
set_array(int array[], size_t size, int value)
{
	for (size_t i {0}; i < size; i++) {
		array[i] = value;
	}
}

int
main(int argc, char *argv[])
{
	int array[] { 10, 20, 30, 40, 50 };
	int array_size { sizeof(array) / sizeof(array[0]) };
	print_array( array, array_size );
	set_array( array, array_size, 0);
	print_array( array, array_size );
	return 0;
}

