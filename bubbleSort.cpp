/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bubbleSort.cpp
 * Author: jackdiamond
 * 
 * Created on April 1, 2018, 8:19 PM
 */

#include "bubbleSort.h"

/**
 * Default Constructor
@pre: 
@post: A instance of the class object is made with members swaps and comparisons set to zero
@param: none 
@return: nothing
**/ 
bubbleSort::bubbleSort() {
    comparisons = 0;
    swaps = 0;
}

/**
 * Copy constructor
 * 
 * This is not used because it is not needed this project
@pre: 
@post: A copy of the object passed in is made
@param: orig A bubbleSort object to be copied
@return: nothing
**/ 
bubbleSort::bubbleSort(const bubbleSort& orig) {
}

/**
 * Deconstructor
@pre: A valid class object exists
@post: The class object is destroyed
@param: none  
@return: none 
**/ 
bubbleSort::~bubbleSort() {
}

/**
 * Swap function that swaps two integers used in bubbleSort's sort algorithm
@pre: 
@post: The two integers passed in are now swapped
@param: xp One integer to be swapped
@param: yp The other integer to be swapped 
@return: void
**/ 
void bubbleSort::swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/**
 * This is the actual bubble sort algorithm to sort the array
@pre: Array is available to be sorted
@post: Array is now sorted
@param: arr An array that is to be sorted
@param: n The amount of elements in the array  
@return: void 
**/ 
void bubbleSort::sort(int arr[], int n){
   int i, j;
   for (i = 0; i < n-1; i++){       
       for (j = 0; j < n-i-1; j++){ 
           comparisons++;
           if (arr[j] > arr[j+1]){
              swap(&arr[j], &arr[j+1]);
              swaps++;
           }
       }
   }

}