import java.util.*;

public class Main {
    public static void main(String[] names) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Please enter the size of your array: ");
        int size = sc.nextInt();

        int[] numbers = new int[size];

        System.out.println("Enter the elements of your array: ");

        for (int i=0; i<size; i++) {

            numbers[i] = sc.nextInt();
        }

        sc.close();

        var sorter = new MergeSort();
        sorter.sort(numbers);
        
        System.out.println(Arrays.toString(numbers));
        
    }
}
