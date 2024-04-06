#include<iostream>

using namespace std;

int* Merge(int left[], int leftsize, int right[], int rightsize, int result[], int resultsize) {

    int i=0, j=0, k=0;

    int* resultPointer = result;

    while (i<leftsize && j<rightsize) {

        if (left[i] <= right[j]) {

            result[k] = left[i];
            k++;
            i++;
        }
        else {

            result[k] = right[j];
            k++;
            j++;
        }
    }

    while (i<leftsize) {

        result[k] = left[i];
        k++;
        i++;
    }

    while (j<rightsize) {

        result[k] = left[j];
        k++;
        j++;
    }

    return resultPointer;
}

int* Sort(int unsorted[], int size) {

    int* result;

    if (size<2) {

        return result;
    }

    //Divide the array into half
    int middle = size/2;

    int left[middle];

    for (int i=0; i<middle; i++) {

        left[i] = unsorted[i];
    }

    int right[size-middle];

    for (int i=middle; i<size; i++) {

        //i-middle was done on the right array's index to make sure the right partition array starts from 0.
        right[i-middle] = unsorted[i];
    }

    //Sort each half
    Sort(left, middle);
    Sort(right, size-middle);

    //Merge the result

    int resultarr[size];

    result = Merge(left, middle, right, size-middle, resultarr, size);

}

int main() {

    int size;

    cout << "Please enter the size of your array: ";

    cin >> size;

    int unsorted[size];

    cout << "Please enter the elements of your array: ";

    for (int i=0; i<size; i++) {

        cin >> unsorted[i];
    }

    cout << endl;

    int* sortedPointer = Sort(unsorted, size);

    cout << "Your sorted array is: [";

    for (int i=0; i<size; i++) {

        cout << *(sortedPointer + i) << " ";
    }
    
    cout << "]" << endl;
}