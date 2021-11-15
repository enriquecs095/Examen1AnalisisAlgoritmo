#include "mergesort.h"
#include <iostream>
using namespace std;

mergesort::mergesort(){}


void  mergesort::merge(int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];

    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
  
    auto indexOfSubArrayOne = 0, 
        indexOfSubArrayTwo = 0; 
    int indexOfMergedArray = left; 

    int i, j,k;
    for(k = left , i=j=0; k <= right; ++k )
	{
		if(i == subArrayOne)
			array[k] = rightArray[j++];
		
		else if(j == subArrayTwo)
			array[k] = leftArray[i++];

		else if(leftArray[i] <= rightArray[j])
			array[k]=leftArray[i++];

		else array[k]=rightArray[j++];
	}
}
  


 void mergesort::mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; 
  
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}


void mergesort::printList(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
    cout <<"\n";
}
  