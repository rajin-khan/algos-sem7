#include<iostream>

using namespace std;

int* InsertionSort(int unsorted[], int size) {

    int* sorted = unsorted;

    for (int i=1; i<size; i++) {

        int temp = unsorted[i];
        int j = i-1;

        while (j>=0 && unsorted[j]>=temp) {

            unsorted[j+1] = unsorted[j];
            j--;
        }
        unsorted[j+1] = temp;
    }

    return sorted;

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

    int* sortedPointer = InsertionSort(unsorted, size);

    cout << endl;

    cout << "The sorted array is: [ ";

    for (int i=0; i<size; i++) {

        cout << *(sortedPointer + i) << " " ;
    }
    
    cout << "]" << endl;

}