/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   radixSort.h
 * Author: jackdiamond
 *
 * Created on April 1, 2018, 8:13 PM
 */

#ifndef RADIXSORT_H
#define RADIXSORT_H

#include <iostream>

class radixSort {
public:
    radixSort();
    radixSort(const radixSort& orig);
    virtual ~radixSort();
    int getMax(int arr[], int n);
    void countSort(int arr[], int n, int exp);
    void sort(int arr[], int n);
    int comparisons; //Comparison counter
    int swaps; //Swap counter
private:

};

#endif /* RADIXSORT_H */

