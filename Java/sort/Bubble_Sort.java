package Java.sort;

/*
method 1:
    In this method we are comparing all the elements through the array eventhough it is sorted from end.(descending).
It is slow compared to method 2.

method 2:
    In this method we are ignoring i elements from every pass and we dont need to check and it wouldn't swap because 
elements are already sorted in previous passes. So I will save time.

arr: 15, 16, 6, 8, 5

j< n-i-1 -> j= 0 - 4;

pass 1: 15, 6, 8, 5, 16 -> 16 will be ignored in next pass

j< n-i-1 -> j= 0 - 3;

pass 2: 6, 8, 5, 15, 16 -> 15, 16 will be ignored in next pass

j< n-i-1 -> j= 0 - 2;

pass 3: 6, 5, 8, 15, 16 -> 8, 15, 16 will be ignored in next pass

j< n-i-1 -> j= 0 - 1;

pass 4: 5, 6, 8, 15, 16

j< n-i-1 -> j= 0 - 0;  will be false so pass 5 would not happen.

if 1st index to end index sorted then 0th index will also be sorted. So another pass is not required. 

pass 5: will not happen, all sorted, loop ends.

 */
public class Bubble_Sort {

    public static void main(String[] args) {
        //method 1:
        System.out.println("It will check all over the array \neven though it is sorted already! ");
        int arr[] = {15, 16, 6, 8, 5};
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (arr[j] > arr[j + 1]) {//if true
                    //swapping arr[j] < - > arr[j + 1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int e : arr) {
            System.out.print(e + " ");
        }
        System.out.println();
        //method 2:
        System.out.println("faster than above: \nbecause it ignores n-i-1 index each time! ");

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int e : arr) {
            System.out.print(e + " ");
        }
        System.out.println();
    }
}
