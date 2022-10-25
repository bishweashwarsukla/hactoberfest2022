import java.util.*;
public class QuickSort
{
    int partition(int arr[],int low,int high)//Dividing the array
    {
        int pivot=arr[high];
        int i=(low-1);
        for(int j=low;j<high;j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        int temp=arr[i+1];
        arr[i+1]=arr[high];
        arr[high]=temp;
        return i+1;
    }

    void sort(int arr[],int low,int high)//Indirect Recursive Technique
    {
        if(low<high)
        {
            int pi=partition(arr,low,high);
            sort(arr,low,pi-1);
            sort(arr,pi+1,high);
        }
    }

    void printArray(int arr[])//Printing the Array
    {
        int n=arr.length;
        for(int i=0;i<n;++i)
            System.out.print(arr[i]+" ");
        System.out.println();
    }

    void main()//Main function to call all the functions
    {
        Scanner sc=new Scanner(System.in);
        int arr[]=new int[10];
        for(int p=0;p<arr.length;p++)
        {
            System.out.println("Enter the Element to placed at["+p+"]:");
            arr[p]=sc.nextInt();
        }
        QuickSort ob=new QuickSort();
        System.out.println("Given Array");
        printArray(arr);
        ob.sort(arr,0,arr.length-1);
        System.out.println("Sorted Array");
        printArray(arr);
    }
}
