/*
Insertion sort:

2 loops required one is incrementing, another one is decrementing

int[] a = {5, 4, 10, 1, 6, 2};

Insertion Sort will take one element as sorted list in the beginning then sorted list
length will be incremented by 1.
next element after the sorted list will be compared with all the elements in sorted list
if it passes the condition (which is new element lesser than element present in sorted list
this inner loop will swap elements one by one to next index until the condition fails
after that the temp element(next element of sorted list) will be placed in j+1 th position

i=1; j=i-1=>0 
a[j]>temp(true) 
a[j+1]=a[j] (swapping); 
j=-1 condition fails
a[j+1]=a[-1+1]->a[0]=temp 
a[0]=4; a[1]=5;

4 5 10 1 6 2

i=2; j=1-0
4 5 10 1 6 2

i=3; j=2-0; 
if(temp(10)>a[j](a[2]=5)) 
then condition fails 
then j=2 a[j+1](3)=10, 
no swapping happened 

1 4 5 10 6 2

i=4;j=3-0
1 4 5 6 10 2

i=5;j=4-0
1 2 4 5 6 10

 */
public class Insertion_Sort {

    public static void main(String[] args) {
        int[] a = {2, 1, 3, 1, 2};
        int n = a.length;
        System.out.println("arr={5, 4, 10, 1, 6, 2},\nIterations & Swapping\n");
        for (int i = 1; i < n; i++) {
            int temp = a[i];
            int j = i - 1;

            while (j >= 0 && a[j] > temp) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = temp;
            for (int e : a) {
                System.out.print(e + " ");
            }
            System.out.println("\n");
        }

        System.out.print("Sorted List: ");
        for (int e : a) {
            System.out.print(e + " ");
        }
        System.out.println();
    }

}
