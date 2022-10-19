import java.util.*;
public class PrimeOrNot {

	public static void main(String[] args) {
	    Scanner scn = new Scanner(System.in);
	    System.out.println("Enter the number : ");
	    int num = scn.nextInt();
		System.out.println(isPrime(num)); 
	}

	public static boolean isPrime(int n) {
		if (n == 0 || n == 1) {
			return false;
		}
		if (n == 2) {
			return true;
		}
		for (int i = 2; i <= n / 2; i++) {
			if (n % i == 0) {
				return false;
			}
		}

		return true;
	}
}
