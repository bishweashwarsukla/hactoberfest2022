import java.util.Scanner;

public class J_38_countZeroRec {
    static int cnt = 0;
    static int countZeroes(int num){
        if(num == 0){
            return cnt;
        }
        if(num%10 == 0){
            cnt++;
        }
        
        return countZeroes(num/10);
    }
    public static void main(String[] args) {
        
        Scanner cin = new Scanner(System.in);
        System.out.print("Enter number: ");
        int num = cin.nextInt();
        System.out.print("Number of ZEROES: " + countZeroes(num));
    }
    
}
