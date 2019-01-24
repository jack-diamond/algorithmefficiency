/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bubbleSort.h
 * Author: jackdiamond
 *
 * Created on April 1, 2018, 8:19 PM
 */

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

class bubbleSort {
public:
    bubbleSort();
    bubbleSort(const bubbleSort& orig);
    virtual ~bubbleSort();
    void swap(int *xp, int *yp);
    void sort(int arr[], int n);
    int comparisons;
    long int swaps;
private:

};

#endif /* BUBBLESORT_H */

