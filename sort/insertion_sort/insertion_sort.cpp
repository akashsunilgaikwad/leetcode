#include <iostream>

/*
insertion sort
1. store key 
2. create hole technique
*/
int sort(int* arr, int size)
{
	int i, j, key;
	for(i=1; i<size; i++)
	{
		key = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = key;
	}

}

void print_arry(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout<<arr[i]<<std::endl;
	}
}

int main()
{
	std::cout << "This programe will demonstrate insertion sort" << std::endl;
	int arr[] = {10, 3, 40, 20, 50, 80, 70};
	unsigned int size = sizeof(arr)/sizeof(int);
	std::cout <<"Size of array is ="<<size<<std::endl;
	print_arry(arr, size);
	sort(arr, size);
	std::cout << "Sorted array->"<<std::endl;
	print_arry(arr, size);
	return 0;
}