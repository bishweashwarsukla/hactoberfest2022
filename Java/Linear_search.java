
import java.util.Scanner;

public class Linear_search {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int[] arr = {21, 34, 67, 24, 36, 19};
        int ans =0;
        for(int i=0; i<arr.length; i++){

            if (arr[i] == num){
                ans = i;
            }
            else{
                ans = -1;
            }
        }
        System.out.println(ans);
    }
}
