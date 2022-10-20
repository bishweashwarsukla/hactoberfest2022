import java.util.Scanner;

public class One_to_n_Print {

    private static void printOneToN(int n){
        if(n == 0){
            return;
        }
        printOneToN(n-1);
        System.out.print(n + " ");
    }
    public static void main(String[] args) {

        Scanner cin = new Scanner(System.in);
    
        System.out.print("Enter n: ");
        int n = cin.nextInt();
        printOneToN(n);
    }
}
