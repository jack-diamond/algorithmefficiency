/* 
@file quickSort.cpp
@auther jackdiamond 
@date April 1, 2018, 7:50 PM
 */

#include "quickSort.h"

/**
 * Default Constructor
@pre: 
@post: A Class object is made 
@param: none  
@return: none
**/ 
quickSort::quickSort() {
    comparisons = 0;
    swaps = 0;
}

/**
 * Copy Constructor
@pre: An object exists for a copy to be made 
@post: A copy is now made of the object passed in 
@param: orig The object that is to be copied  
@return: none
**/ 
quickSort::quickSort(const quickSort& orig) {
}

/**
 * Deconstructor 
@pre: A class object exists that is to be destroyed
@post: The class object is now destroyed
@param: none 
@return: none 
**/ 
quickSort::~quickSort() {
}

/**
 * Swap function that swaps two integers used in quickSort's sort algorithm
@pre: 
@post: The two integers passed in are now swapped
@param: xp One integer to be swapped
@param: yp The other integer to be swapped 
@return: void
**/
void quickSort::swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

/**
 * This function partitions the array around a pivot point.
 * 
 * This function partitions the array around the last element of the array so that 
 * all of the members less than that value are to the left of the pivot value and all
 * members greater are to the right.
@pre: quickSort's sort function has not reached the recursive stopping point 
@post: The array is now partitioned around the pivot point
@param: arr The array to be partitioned
@param: low The index for the beginning of the array
@param: high The index for the last element of the array. This is the pivot.
@return: int A new pivot point 
**/ 
int quickSort::partition(int arr[], int low, int high){
    int pivot = arr[high];    // pivot
    int i = (low - 1);
 
    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
            swaps++; //increment swap counter
        }
        comparisons++; //increment comparison counter
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/**
 * This the actual quick sort sorting algorithm
@pre: An array exists that is to be sorted
@post: The array is now sorted 
@param: arr The array to be sorted
@param: low The index for the first element of the array
@param: high The index for the last element of the array  
@return: void
**/ 
void quickSort::sort(int arr[], int low, int high){
    if (low < high)
    {
    
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        sort(arr, low, pi - 1);
        sort(arr, pi + 1, high);
    }
}
