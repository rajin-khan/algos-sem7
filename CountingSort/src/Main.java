import java.util.*;

public class Main {
    public static void main(String[] names) {

        int[] numbers = {6, 7, 4, 8, 3, 6, 9, 2, 2, 1};

        var sorter = new CountingSort();
        sorter.sort(numbers, 9);
        
        System.out.println(Arrays.toString(numbers));
        
    }
}
