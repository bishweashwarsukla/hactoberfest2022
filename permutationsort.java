import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.*;
public class permutationsort {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(
                    new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
    static int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    public static void main(String[] args) {
        FastReader sc=new FastReader();
        int t= sc.nextInt();
        while(t-->0)
        {
            int n=sc.nextInt();
            int arr[]=new int[n];
            for (int i=0;i<n;i++){
                arr[i]= sc.nextInt();
            }
            int c=0;


            for (int i=0;i<n-2;i++)

            {
                if(arr[i]>arr[i+1]) {c++;}
                else if(arr[i]<arr[i+1]&&arr[i+1]>arr[i+2]){
                    c++;i++;
                }

            }
            System.out.println(c);
        }
    }
}

