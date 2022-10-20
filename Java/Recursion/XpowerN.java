import java.util.Scanner;

public class XpowerN {

    private static int power(int x, int n){
        if(n==0){
            return 1;
        }
        return x*power(x,n-1);
    }
    public static void main(String[] args) {
    
        Scanner cin = new Scanner(System.in);

        System.out.print("Enter X: ");
        int x = cin.nextInt();

        System.out.print("Enter n: ");
        int n = cin.nextInt();

        System.out.println("X^n => " + power(x,n));

    }
    
}
