package com.company;
import java.util.*;
public class Main {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the size of an array:");
        int n=sc.nextInt();
        int temp;
        int [] marks=new int[n];
        System.out.print("enter the element of an array:");
        for(int i=0;i<n;i++){
            marks[i]=sc.nextInt();
        }
        System.out.println("enter the position you want to insert:");
        int pos=sc.nextInt();
        System.out.println("enter the item you want to insert:");
        int item=sc.nextInt();
        n++;
        if(pos>=n+1){
            System.out.println("insertion not possible");
        }
        else{
            for(int i=n;i>=pos;i--){
                marks[i]=marks[i-1];
            }
        }
        marks[pos-1]=item;
        System.out.println("the elements in an array are:");
        for(int i=0;i<n;i++){
            System.out.println(marks[i]+" ");
        }
    }
}
