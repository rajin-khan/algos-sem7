public class QuickSort {

    //this is just done to make the implementation in the main class cleaner.
    public void sort(int[] array) { //we could've just deleted this, made the sort algo below public, and called that with the three parameters.

        sort(array, 0, array.length-1);
    }
    
    private void sort(int[] array, int start, int end) {

        //base condition
        if (start>=end) { //start == end means an array with a single element. start>end means an array that is empty. thus, we combine the two.

            return;
        }

        //partition
        var boundary = partition(array, start, end);

        //sort left
        sort(array, start, boundary-1);

        //sort right
        sort(array, boundary+1, end);

    }

    private int partition(int[] array, int start, int end) {

        var pivot = array[end];
        var boundary = start-1;

        for (var i=start; i<=end; i++) {

            if (array[i]<=pivot) {

                boundary++;
                swap(array, i, boundary);
            }
        }

        return boundary;
    }

    private void swap(int[] array, int index1, int index2) {

        var temp = array[index1];
        array[index1] = array[index2];
        array[index2] = temp;
    }
}
