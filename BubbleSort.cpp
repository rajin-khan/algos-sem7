#include<iostream>

using namespace std;

//remember to add comments to explain the bubble sort

int* BubbleSort(int arr[], int size) {

    int* sorted = arr;
    int temp;

    for (int i=0; i<size; i++) {

        int temp;

        for (int j=0; j<size-1; j++) {

            if (arr[j]>=arr[j+1]) {

                temp = arr[j+1];
                arr[j+1] = arr[j];

                arr[j] = temp;
            }
        }
    }

    return sorted;  
}

int main() {
    
    cout << "Please enter the size of your array: ";

    int size;
    cin >> size;

    int arr[size];

    cout << "Please enter the values of your array: ";

    for (int i=0; i<size; i++) {

        cin >> arr[i];
    }

    cout << endl;

    int* sortedPointer = BubbleSort(arr, size);

    cout << "The sorted array is: [ ";

    for (int i=0; i<size; i++) {

        cout << *(sortedPointer + i) << " " ; //here, the * acts as a dereferencing pointer, and since the pointer points to the element needed, each time, it must add the value of i in order to point in the right place.
    }
    
    cout << "]" << endl;

    return 0;
}