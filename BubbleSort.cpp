////i understood this best from mosh's video. sorting visualizer, a website that helps you visualise these algorithms helped out a lot too.

#include<iostream>

using namespace std;

//remember to add comments to explain the bubble sort

int* BubbleSort(int unsorted[], int size) {

    int* sorted = unsorted; //pointer to the unsorted array is created
    int temp; //a temporary variable is created to hold the value during the swapping process

    //insertion sort runs for quadratic time complexity, O(n²). this is because the loop has to make n*n passes for n elements to be fully sorted.
    for (int i=0; i<size; i++) { //the first loop is started to keep track of the number of passes required (n times for n elements)

        for (int j=0; j<size-1; j++) { //the second loop keeps track of individually passing over each element (n-1 times, because it checks the next element, we would have an out of bounds error if we continued till n)

            if (unsorted[j]>=unsorted[j+1]) { //if the item on the right >= item on the left,

                temp = unsorted[j+1];
                unsorted[j+1] = unsorted[j];
                unsorted[j] = temp; //we swap values
            }
        }
    }

    return sorted; //returns the pointer to the now sorted array
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

    int* sortedPointer = BubbleSort(arr, size); //pointer created to store the return value of the BubbleSort() function

    cout << "The sorted array is: [ ";

    for (int i=0; i<size; i++) {

        cout << *(sortedPointer + i) << " " ; //here, the * acts as a dereferencing pointer, and since the pointer points to the element needed, each time, it must add the value of i in order to point in the right place.
    }
    
    cout << "]" << endl;

    return 0;
}