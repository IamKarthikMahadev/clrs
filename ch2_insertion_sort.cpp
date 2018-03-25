#include <iostream>
void insertion_sort(int a[], int length)
{
	for (int j = 1; j < length; j++)
	{
		int key = a[j];
		int i = j-1;
		while(i>=0 and a[i]> key)
		{
			a[i+1] = a[i];
			i = i-1;
		};
		a[i+1] = key;
	}
}
void print_array(int a[], int length)
{
	for(int i = 0; i < length; i++)
	{
		std:: cout << a[i] << "\t";
	}
	std::cout << std::endl;
}
int main(int argc, char** argv)
{
	int array_count = argc-1;
	int* a = new int[array_count];
	for(int i = 0; i < array_count; i++)
	{
		a[i] = std::stoi(argv[i+1]);
	}
	print_array(a, array_count);
	insertion_sort(a, array_count);
	print_array(a, array_count);
	
}
	
	
