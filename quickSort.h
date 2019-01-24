/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   quickSort.h
 * Author: jackdiamond
 *
 * Created on April 1, 2018, 7:50 PM
 */

#ifndef QUICKSORT_H
#define QUICKSORT_H

class quickSort {
public:
    quickSort();
    quickSort(const quickSort& orig);
    virtual ~quickSort();
    void swap(int* a, int* b);
    int partition (int arr[], int low, int high);
    void sort(int arr[], int low, int high);
    int comparisons; // Comparison counter
    int swaps; //Swap counter
private:

};

#endif /* QUICKSORT_H */

