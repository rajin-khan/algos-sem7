public class CountingSort {

    public void sort(int[] array, int max) { //the parameter must include the max value so we know what the length of the counts array needs to be.

        int[] counts = new int[max + 1];

        for (var item : array) { //enhanced for loop, meaning it goes over each element in the array.

            counts[item]++; //so for whatever item/value we get for each element of the input array, that index in the counts array goes up by 1.
        }

        int k = 0; //pointer for answer array (over original array)

        for (int i=0; i<counts.length; i++) { 

            for (int j=0; j<counts[i]; j++) {  //for repeatedly entering the values of i for as much as the value in counts[i]

                array[k] = i;
                k++;
            }
        }

    }
    
}
