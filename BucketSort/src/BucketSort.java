import java.util.*;

public class BucketSort {

    public void sort(int[] array, int numberOfBuckets) {

        int i=0;

        for (var bucket : createBuckets(array, numberOfBuckets)) {

            Collections.sort(bucket);
            for (var item : bucket) {

                array[i++] = item;
            }
        }
    }

    private List<List<Integer>> createBuckets(int[] array, int numberOfBuckets) {

        List<List<Integer>> buckets = new ArrayList<>();

        for (var i=0; i<numberOfBuckets; i++) {

            buckets.add(new ArrayList<>());
        }

        for (var item : array) {

            buckets.get(item/numberOfBuckets).add(item);
        }

        return buckets;

    }
}
