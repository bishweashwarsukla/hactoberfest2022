public class Quick_Sort {

    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static int partition(int[] arr, int lb, int ub) {
        int pivot = arr[lb];
        int start = lb;
        int end = ub;
        while (start < end) {
            while (arr[start] <= pivot) {
                start++;
            }
            while (arr[end] > pivot) {
                end--;
            }
            if (start < end) {
                swap(arr, start, end);
            }
        }
        int temp = arr[lb];
        arr[lb] = arr[end];
        arr[end] = temp;

        return end;
    }

    public static void quickSort(int[] arr, int lb, int ub) {

        if (lb < ub) {
            int loc = partition(arr, lb, ub);
            System.out.println(loc+" "+lb+" "+ub+" ");
            for (int e : arr) {
            System.out.print(e + " ");
        }
        System.out.println();
            quickSort(arr, lb, loc - 1);
            quickSort(arr, loc + 1, ub);
        }
    }

    public static void printArray(int[] arr, int n) {
        for (int e : arr) {
            System.out.print(e + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = {7, 6, 10, 5, 9, 2, 1, 15};
        int n = arr.length;
        int lb = 0;
        int ub = n - 1;
        quickSort(arr, lb, ub);
        System.out.println("Sorted array: ");
        printArray(arr, n);
    }

}
