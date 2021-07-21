#include <iostream>
using namespace std;

template <typename T>
void insertionSort_Increase(T *arr, int size)
{
	for (int i = 1; i < size; ++i)
	{
		int j = i - 1;
		T key = arr[i];
		while (arr[j] > key && j >= 0)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

template <typename T>
void insertionSort_Decrease(T *arr, int size)
{
	for (int i = 1; i < size; ++i)
	{
		int j = i - 1;
		T key = arr[i];
		while (arr[j] < key && j >= 0)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

template <typename T>
void Bubble_Decrease(T *arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = size - 1; j >= 1; --j)
		{
			if (arr[j] > arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
}

template <typename T>
void Bubble_Increase(T *arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = size - 1; j >= 1; --j)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
}

template <typename T>
void Selection_Increase(T *arr, int size)
{

	for (int i = 0; i < size; ++i)
	{
		int min = i;
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		swap(arr[min], arr[i]);
	}
}

template <typename T>
void Selection_Decrease(T *arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		int min = i;
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[min] < arr[j])
			{
				min = j;
			}
		}
		swap(arr[min], arr[i]);
	}
}

template <typename T>
void Selection_Increase_rec(T *arr, int size, int start)
{
	if (start == size)
		return;
	int min = start;
	int j{};
	for (j = start + 1; j < size; ++j)
	{
		if (arr[min] > arr[j])
		{
			min = j;
		}
	}
	swap(arr[min], arr[start]);
	Selection_Increase_rec(arr, size, start + 1);
}

template <typename T>
void Selection_Decrease_rec(T *arr, int size, int start)
{
	if (start == size)
		return;
	int min = start;
	int j{};
	for (j = start + 1; j < size; ++j)
	{
		if (arr[min] < arr[j])
		{
			min = j;
		}
	}
	swap(arr[min], arr[start]);
	Selection_Decrease_rec(arr, size, start + 1);
}




