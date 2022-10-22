package Java.sort;

/*
In best case: we dont need to compare all element again which is already in sorted order.
So we are introducing the flag variable which can say it is modified or not in j loop. If 
flag is modified which means [swap & sort] happened if not every element in the loop is in sorted
order. so, after that particular iteration if flag is unmodified we can break the i loop and get out
of iteration, because in next pass nothing is going to be sorted, it will save time. 
This is how bubble sort get optimized.

in best case (if array is partially sorted or almost sorted while declaring the array) time complexity will be O(n)
in worst case (iteration will happen for (n-1)*(n-1) times) time complexity will be O(n^2)
*/

public class Optimized_BubbleSort {

    public static void main(String[] args) {
        
        int arr[] = {16, 14, 5, 6, 8};
        int n = arr.length;
    int count_j=0;
    int count_i=0;
        for (int i = 0; i < n - 1; i++) {
            boolean flag=false; 
            count_i++;
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    flag=true;
                    count_j++;
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            if(flag==false)
                break;
        }
        for (int e : arr) {
            System.out.print(e + " ");
        }
        
        System.out.println();
        /*
        To check no of times i and j loops iterated we are using count variable.
        */
        System.out.println("No.of.iterations in i: "+count_i+
                "\nNo.of.iterations in j: "+count_j+
                "\nTotal No.of.passes: "+ (n-1));
    }
    
}
