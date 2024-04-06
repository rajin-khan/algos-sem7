public class MergeSort {

    public void sort(int[] array) {

        //base case
        if (array.length<2) {

            return;
        }

        //Divide each half
        var middle = array.length/2;
        int[] left = new int[middle];

        for (var i=0; i<middle; i++) {

            left[i] = array[i];
        }

        int[] right = new int[array.length-middle];

        for (var i=middle; i<array.length; i++) {

            //i-middle because the right partition array must start from 0.
            right[i-middle] = array[i];
        }

        //sort each half
        sort(left);
        sort(right);

        //Merge the result
        merge(left, right, array);

    }
    
    public void merge(int[] left, int[] right, int[] result) {

        int i=0, j=0, k=0;

        while (i<left.length && j<right.length) {

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

        while(i<left.length) {

            result[k] = left[i];
            k++;
            i++;
        }
        
        while(j<right.length) {

            result[k] = right[j];
            k++;
            j++;
        }
    }
}
