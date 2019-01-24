/* 
 * File:   main.cpp
 * Author: jackdiamond
 *
 * Created on March 29, 2018, 6:12 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include "bubbleSort.h"
#include "quickSort.h"
#include "radixSort.h"

using namespace std;

int main(int argc, char** argv) {
    int array1[1000];
    int array1_copy[1000];
    int array2[10000];
    int array2_copy[10000];
    int array3[100000];
    int array3_copy[100000];
    bubbleSort bubble;
    quickSort quick;
    radixSort radix;
    
    //Generating random values for 1000 array
    for(int i = 0; i < 1000; ++i){
        array1[i] = rand() % 1000000 + 1;
    }
    
    //Generating random values for 10000 array
    for(int i = 0; i < 10000; ++i){
        array2[i] = rand() % 1000000 + 1;
    }
    
    //Generating random values for 100000 array
    for(int i = 0; i < 100000; ++i){
        array3[i] = rand() % 1000000 + 1;
    }
    
    //Making copy of 1000 array for future sorts
    for(int i = 0; i < 1000; ++i){
        array1_copy[i] = array1[i];
    }
    
    //Making copy of 10000 array for future sorts
    for(int i = 0; i < 10000; ++i){
        array2_copy[i] = array2[i];
    }
    
    //Making copy of 100000 array for future sorts
    for(int i = 0; i < 100000; ++i){
        array3_copy[i] = array3[i];
    }
    
    cout << "/////////////// BUBBLE SORT TESTING ///////////////" << endl;
    //Testing insertion sort on 1000 array
    cout << "Testing bubble sort with 1000 random values." << endl;
    int start1_1 = clock();
    
    bubble.sort(array1, 1000);
    
    int stop1_1 = clock();
    cout << "swaps: " << bubble.swaps << endl;
    cout << "comparisons: " << bubble.comparisons << endl;
    cout << "time(s): " << (stop1_1 - start1_1)/double(CLOCKS_PER_SEC) << endl << endl;
    bubble.swaps = 0;
    bubble.comparisons = 0;
    
    //Testing insertion sort on 10000 array
    cout << "Testing bubble sort with 10000 random values." << endl;
    
    int start1_2 = clock();
    bubble.sort(array2, 10000);
    int stop1_2 = clock();
    
    cout << "swaps: " << bubble.swaps << endl;
    cout << "comparisons: " << bubble.comparisons << endl;
    cout << "time(s): " << (stop1_2 - start1_2)/double(CLOCKS_PER_SEC) << endl << endl;
    bubble.swaps = 0;
    bubble.comparisons = 0;
    
    //Testing insertion sort on 100000 array
    cout << "Testing bubble sort with 100000 random values." << endl;
    
    int start1_3 = clock();
    bubble.sort(array3, 100000);
    int stop1_3 = clock();
    
    cout << "swaps: " << bubble.swaps << endl;
    cout << "comparisons: " << bubble.comparisons << endl;
    cout << "time(s): " << (stop1_3 - start1_3)/double(CLOCKS_PER_SEC) << endl << endl;
    bubble.swaps = 0;
    bubble.comparisons = 0;
    
    //Copying original array values back over
    for(int i = 0; i < 1000; ++i){
        array1[i] = array1_copy[i];
    }
    for(int i = 0; i < 10000; ++i){
        array2[i] = array2_copy[i];
    }
    for(int i = 0; i < 100000; ++i){
        array3[i] = array3_copy[i];
    }
    
    //Making copies again
    for(int i = 0; i < 1000; ++i){
        array1_copy[i] = array1[i];
    }
    for(int i = 0; i < 10000; ++i){
        array2_copy[i] = array2[i];
    }
    for(int i = 0; i < 100000; ++i){
        array3_copy[i] = array3[i];
    }
    
    cout << endl;
    cout << endl;
    cout << "/////////////// QUICK SORT TESTING ///////////////" << endl;
    //Testing quick sort on 1000 array
    cout << "Testing quick sort with 1000 random values." << endl;
    int start2_1 = clock();
    
    quick.sort(array1, 0 , 1000 - 1);
    
    int stop2_1 = clock();
    cout << "swaps: " << quick.swaps << endl;
    cout << "comparisons: " << quick.comparisons << endl;
    cout << "time(s): " << (stop2_1 - start2_1)/double(CLOCKS_PER_SEC) << endl << endl;
    quick.swaps = 0;
    quick.comparisons = 0;
    
    //Testing quick sort on 10000 array
    cout << "Testing quick sort with 10000 random values." << endl;
    
    int start2_2 = clock();
    quick.sort(array2, 0, 10000 - 1);
    int stop2_2 = clock();
    cout << "swaps: " << quick.swaps << endl;
    cout << "comparisons: " << quick.comparisons << endl;
    cout << "time(s): " << (stop2_2 - start2_2)/double(CLOCKS_PER_SEC) << endl << endl;
    quick.swaps = 0;
    quick.comparisons = 0;
    
    //Testing quick sort on 100000 array
    cout << "Testing quick sort with 100000 random values." << endl;
    
    int start2_3 = clock();
    quick.sort(array3, 0, 100000 - 1);
    int stop2_3 = clock();
    cout << "swaps: " << quick.swaps << endl;
    cout << "comparisons: " << quick.comparisons << endl;
    cout << "time(s): " << (stop2_3 - start2_3)/double(CLOCKS_PER_SEC) << endl << endl;
    quick.swaps = 0;
    quick.comparisons = 0;
    
    //Copying original array values back over
    for(int i = 0; i < 1000; ++i){
        array1[i] = array1_copy[i];
    }
    for(int i = 0; i < 10000; ++i){
        array2[i] = array2_copy[i];
    }
    for(int i = 0; i < 100000; ++i){
        array3[i] = array3_copy[i];
    }
    
    //Making copies again
    for(int i = 0; i < 1000; ++i){
        array1_copy[i] = array1[i];
    }
    for(int i = 0; i < 10000; ++i){
        array2_copy[i] = array2[i];
    }
    for(int i = 0; i < 100000; ++i){
        array3_copy[i] = array3[i];
    }
    
    cout << endl;
    cout << endl;
    cout << "/////////////// RADIX SORT TESTING ///////////////" << endl;
    //Testing radix sort on 1000 array
    cout << "Testing radix sort with 1000 random values." << endl;
    int start3_1 = clock();
    
    radix.sort(array1, 1000);
    
    int stop3_1 = clock();
    cout << "swaps: none" << endl;
    cout << "comparisons: none" << endl;
    cout << "time(s): " << (stop3_1 - start3_1)/double(CLOCKS_PER_SEC) << endl << endl;
    
    //Testing radix sort on 10000 array
    cout << "Testing radix sort with 10000 random values." << endl;
    
    int start3_2 = clock();
    radix.sort(array2, 10000);
    int stop3_2 = clock();
    
    cout << "swaps: none" << endl;
    cout << "comparisons: none" << endl;
    cout << "time(s): " << (stop2_2 - start2_2)/double(CLOCKS_PER_SEC) << endl << endl;
    
    //Testing radix sort on 100000 array
    cout << "Testing radix sort with 100000 random values." << endl;
    
    int start3_3 = clock();
    radix.sort(array3, 100000);
    int stop3_3 = clock();
    
    cout << "swaps: none" << endl;
    cout << "comparisons: none" << endl;
    cout << "time(s): " << (stop3_3 - start3_3)/double(CLOCKS_PER_SEC) << endl << endl;
    
    // SORTED DATA TESTING
    cout << endl << endl;
    cout << "--------------- SORTED DATA TESTING ---------------" << endl;
    
    //BUBBLE TESTING
    cout << "/////////////// BUBBLE SORT TESTING ///////////////" << endl;
    //Testing insertion sort on 1000 array
    cout << "Testing bubble sort with 1000 random values." << endl;
    int start4_1 = clock();
    
    bubble.sort(array1, 1000);
    
    int stop4_1 = clock();
    cout << "swaps: " << bubble.swaps << endl;
    cout << "comparisons: " << bubble.comparisons << endl;
    cout << "time(s): " << (stop4_1 - start4_1)/double(CLOCKS_PER_SEC) << endl << endl;
    bubble.swaps = 0;
    bubble.comparisons = 0;
    
    //Testing insertion sort on 10000 array
    cout << "Testing bubble sort with 10000 random values." << endl;
    
    int start4_2 = clock();
    bubble.sort(array2, 10000);
    int stop4_2 = clock();
    
    cout << "swaps: " << bubble.swaps << endl;
    cout << "comparisons: " << bubble.comparisons << endl;
    cout << "time(s): " << (stop4_2 - start4_2)/double(CLOCKS_PER_SEC) << endl << endl;
    bubble.swaps = 0;
    bubble.comparisons = 0;
    
    //Testing insertion sort on 100000 array
    cout << "Testing bubble sort with 100000 random values." << endl;
    
    int start4_3 = clock();
    bubble.sort(array3, 100000);
    int stop4_3 = clock();
    
    cout << "swaps: " << bubble.swaps << endl;
    cout << "comparisons: " << bubble.comparisons << endl;
    cout << "time(s): " << (stop4_3 - start4_3)/double(CLOCKS_PER_SEC) << endl << endl;
    bubble.swaps = 0;
    bubble.comparisons = 0;
    
    //QUICK SORT TESTING
    cout << "/////////////// QUICK SORT TESTING ///////////////" << endl;
    //Testing quick sort on 1000 array
    cout << "Testing quick sort with 1000 random values." << endl;
    int start5_1 = clock();
    
    quick.sort(array1, 0 , 1000 - 1);
    
    int stop5_1 = clock();
    cout << "swaps: " << quick.swaps << endl;
    cout << "comparisons: " << quick.comparisons << endl;
    cout << "time(s): " << (stop5_1 - start5_1)/double(CLOCKS_PER_SEC) << endl << endl;
    quick.swaps = 0;
    quick.comparisons = 0;
    
    //Testing quick sort on 10000 array
    cout << "Testing quick sort with 10000 random values." << endl;
    
    int start5_2 = clock();
    quick.sort(array2, 0, 10000 - 1);
    int stop5_2 = clock();
    cout << "swaps: " << quick.swaps << endl;
    cout << "comparisons: " << quick.comparisons << endl;
    cout << "time(s): " << (stop5_2 - start5_2)/double(CLOCKS_PER_SEC) << endl << endl;
    quick.swaps = 0;
    quick.comparisons = 0;
    
    //Testing quick sort on 100000 array
    cout << "Testing quick sort with 100000 random values." << endl;
    
    int start5_3 = clock();
    quick.sort(array3, 0, 100000 - 1);
    int stop5_3 = clock();
    cout << "swaps: " << quick.swaps << endl;
    cout << "comparisons: " << quick.comparisons << endl;
    cout << "time(s): " << (stop5_3 - start5_3)/double(CLOCKS_PER_SEC) << endl << endl;
    quick.swaps = 0;
    quick.comparisons = 0;
    
    //RADIX TESTING
    cout << "/////////////// RADIX SORT TESTING ///////////////" << endl;
    
    //Testing radix sort on 1000 array
    cout << "Testing radix sort with 1000 random values." << endl;
    int start6_1 = clock();
    
    radix.sort(array1, 1000);
    
    int stop6_1 = clock();
    cout << "swaps: none" << endl;
    cout << "comparisons: none" << endl;
    cout << "time(s): " << (stop6_1 - start6_1)/double(CLOCKS_PER_SEC) << endl << endl;
    
    //Testing radix sort on 10000 array
    cout << "Testing radix sort with 10000 random values." << endl;
    
    int start6_2 = clock();
    radix.sort(array2, 10000);
    int stop6_2 = clock();
    
    cout << "swaps: none" << endl;
    cout << "comparisons: none" << endl;
    cout << "time(s): " << (stop6_2 - start6_2)/double(CLOCKS_PER_SEC) << endl << endl;
    
    //Testing radix sort on 100000 array
    cout << "Testing radix sort with 100000 random values." << endl;
    
    int start6_3 = clock();
    radix.sort(array3, 100000);
    int stop6_3 = clock();
    
    cout << "swaps: none" << endl;
    cout << "comparisons: none" << endl;
    cout << "time(s): " << (stop6_3 - start6_3)/double(CLOCKS_PER_SEC) << endl << endl;
    
    
    
    
    
    return 0;
}

