import java.util.*;
public class MergeSort
{
    void merge(int arr[],int l,int m,int r)//To Separate and Sort
    {
        int n1=m-l+1;
        int n2=r-m;
        int L[]=new int[n1];
        int R[]=new int[n2]; 
        for(int i=0;i<n1;++i)
            L[i]=arr[l+i];
        for(int j=0;j<n2;++j)
            R[j]=arr[m+1+j];
        int i=0,j=0;
        int k=l;
        while(i<n1&&j<n2)
        {
            if(L[i]<=R[j])
            {
                arr[k]=L[i];
                i++;
            }
            else
            {
                arr[k]=R[j];
                j++;
            }
            k++;
        }
        while(i<n1)
        {
            arr[k]=L[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            arr[k]=R[j];
            j++;
            k++;
        }
    }

    void sort(int  arr[],int l,int r)//Indirect Recursive Method
    {
        if(l<r)
        {
            int m=(l+r)/2;
            sort(arr,l,m);
            sort(arr,m+1,r);
            merge(arr,l,m,r);
        }
    }

    void printArray(int arr[])//To Print all the Sorted elements in an Array
    {
        int n=arr.length;
        for(int i=0;i<n;++i)
            System.out.print(arr[i]+" ");
        System.out.println();
    }

    public void main()//Method to call all the function and input the values from the user and pass them
    {
        Scanner sc=new Scanner(System.in);
        int arr[]=new int[10];
        for(int p=0;p<arr.length;p++)
        {
            System.out.println("Enter the Element to placed at["+p+"]:");
            arr[p]=sc.nextInt();
        }
        System.out.println("Given Array");
        printArray(arr);
        MergeSort ob=new MergeSort();
        ob.sort(arr,0,arr.length-1);
        System.out.println("Sorted Array");
        printArray(arr);
    }
}
