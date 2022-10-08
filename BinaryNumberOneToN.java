/*
Given a positive number n, efficiently generate binary numbers between 1 and n using the queue data structure in linear time.

For example, for n = 16, the binary numbers are:

[1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000]
 */

package Queue;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class BinaryNumberOneToN {

    public String[] generateBinary(int n){
        String[] result = new String[n];
        Queue<String> queue = new LinkedList<>();
        queue.offer("1");
        for(int i = 0; i < n; i++){
            result[i] = queue.poll();

            String s1 = result[i] + "0";
            String s2 = result[i] + "1";

            queue.offer(s1);
            queue.offer(s2);
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BinaryNumberOneToN bn = new BinaryNumberOneToN();
        int n = sc.nextInt();
        System.out.println(Arrays.toString(bn.generateBinary(n)));

    }
}
