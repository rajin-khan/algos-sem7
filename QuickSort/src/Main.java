import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Please enter the size of your array: ");
        int size = sc.nextInt();

        int[] array = new int[size];

        System.out.println("Please enter the elements of your array: ");

        for (int i=0; i<size; i++) {

            array[i] = sc.nextInt();
        }

        sc.close();

        var sorter = new QuickSort();

        sorter.sort(array);

        System.out.println(Arrays.toString(array));
    }
}
