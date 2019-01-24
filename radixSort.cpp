/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   radixSort.cpp
 * Author: jackdiamond
 * 
 * Created on April 1, 2018, 8:13 PM
 */

#include "radixSort.h"

/**
 * Default constructor that sets comparisons and swaps to zero.
@pre: 
@post: A class object is made
@param: none 
@return: none
**/ 
radixSort::radixSort() {
    comparisons = 0;
    swaps = 0;
}

/**
 * The default copy constructor
@pre: An object exists that is to be copied 
@post: A copy of the object is now created 
@param: orig The object that is to be copied  
@return: none 
**/ 
radixSort::radixSort(const radixSort& orig) {
}

/**
 * Deconstructor
@pre: An object exists that is to be destroyed 
@post: The object is now destroyed
@param: none 
@return: none
**/ 
radixSort::~radixSort() {
}

/**
 * Finds the maximum number in the array to determine to what exponent of 10 the array needs to be sorted
@pre: An array is passed in with its size 
@post: The maximum number is found and returned as an integer 
@param: arr The array that the maximum number will be found in
@param: n The size of the array  
@return: int The maximum number in the array
**/ 
int radixSort::getMax(int arr[], int n){
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

/**
 * Does a counting sort of the numbers of the correct exponent value
@pre: An array, the size of the array, and the exponent that the numbers will be sorted in is passed through 
@post: The array is now sorted only in the exponent that is passed in 
@param: arr The array to be sorted
@param: n The size of the array
@param: exp The exponent by which the values in the array will be sorted in  
@return: void
**/ 
void radixSort::countSort(int arr[], int n, int exp){
    int output[n]; // output array
    int i, count[10] = {0};
 
    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;
 
    
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    // makes the output array
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }
 
    // Copy the output array to original array
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

/**
 * This is the actual radix sorting algorithm
@pre: An array and its size are passed in 
@post: The array is now sorted
@param: arr The array to be sorted
@param: n The size of the array 
@return: void
**/ 
void radixSort::sort(int arr[], int n){
    // Find the maximum number
    int m = getMax(arr, n);
 
    // Do counting sort for every digit
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

