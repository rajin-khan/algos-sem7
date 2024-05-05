//i understood this best from mosh's video. his explanation and implementation in java was a huge help too.

#include<iostream>

using namespace std;

//the insertion sort algorithm is defined for a specific unsorted array, with its size given.

int* InsertionSort(int unsorted[], int size) {

    int* sorted = unsorted; //a pointer to the initially unsorted array is created, because we cannot directly return the modified, sorted array

    for (int i=1; i<size; i++) { //the loop starts from 1 because in insertion sort, the first item you "receive", i.e, have, is considered already sorted

        int temp = unsorted[i]; //the value at the index where the swap would happen (if needed) is saved.
        int j = i-1; //the j variable gives the index immediately behind the element we have been "given" to sort.

        while (j>=0 && unsorted[j]>=temp) { //now, until j reaches the start of the array by backtracking, and while the number we are at is greater than the number to be inserted (temp),

            unsorted[j+1] = unsorted[j]; //we shift the rest of them to the right to "make" space for the smaller number
            j--; //then, j is decremented to check the value behind again, so it can shift again if needed
        }
        unsorted[j+1] = temp; //finally, when all the shifting is done, we assign the number to be inserted at the correct position. 
        //notice how j goes one step behind necessary to exit the loop, so we increment it once and then place the needed number there.
    }

    return sorted; //finally, we return the pointer to the now sorted array.

}

int main() {

    int size;

    cout << "Please enter the size of your array: ";
    cin >> size;

    int unsorted[size];

    cout << "Please enter the values of your array: ";

    for (int i=0; i<size; i++) {

        cin >> unsorted[i];
    }

    int* sortedPointer = InsertionSort(unsorted, size); //the pointer variable stores the pointer of the now sorted array to be returned by the InsertionSort() function

    cout << endl;

    cout << "The sorted array is: [ ";

    for (int i=0; i<size; i++) {

        cout << *(sortedPointer + i) << " " ; //here, the * acts as a dereferencing pointer, and since the pointer points to the element needed, each time, it must add the value of i in order to point in the right place.
    }
    
    cout << "]" << endl;

    return 0;

}