package Java.sort;

/*
Selection Sort:
Time Complexity: O(N^2)
In this sorting technique we will have two loops,
i will start from 0 and j will start from i+1
Here we are searching the min value from the array and swap it with position (i). 
In that process
we are taking variable min as i, in j loop we are comparing a[j] < a[min] and if it is true
min variable will be changed not element in array. 
After iterating over the array we will get the smallest value's index position then j loop ends.

if min(new smallest value index) != i index
we will do swap of a[i] and a[min]

Array:  7 4 10 8 3 1 
i=0;    1 4 10 8 3 7 
i=1;    1 3 10 8 4 7 
i=2;    1 3 4 8 10 7 
i=3;    1 3 4 7 10 8 
i=4;    1 3 4 7 8 10 

i will iterate n-1 times. because we dont have to check the last single element.

 */
public class Selection_Sort {

    public static void main(String[] args) {
        int a[] = {7, 4, 10, 8, 3, 1};
        int n = a.length;
        System.out.println("Unsorted Array:\n7 4 10 8 3 1\nIteration: ");
        for (int i = 0; i < n - 1; i++) {
            int min = i;
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[min]) {
                    min = j;
                }
            }
            if (min != i) {
                int temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
            for (int e : a) {
            System.out.print(e + " ");
        }
        System.out.println();
        }
        System.out.println("Sorted Array: ");
        for (int e : a) {
            System.out.print(e + " ");
        }
        System.out.println();
    }

}
