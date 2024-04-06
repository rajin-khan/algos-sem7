import java.util.*;

public class Main {
    public static void main(String[] names) {

        int[] numbers = { 6, 7, 4, 5, 6, 3, 9, 2 };

        var sorter = new MergeSort();

        sorter.sort(numbers);
        
        System.out.println(Arrays.toString(numbers));
        
    }
}
