import java.util.Scanner;
public class Pattern1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter row and col");
		int row = sc.nextInt();
		int col = sc.nextInt();
		
		for (int i=1; i<= row; i++) {
			for (int j=1 ; j<=i ; j++)  // this loop is for printing spaces
				System.out.print(" ");
			for (int j=1 ; j<=col; j++) // this loop is for printing stars
				System.out.print("*");
			System.out.println();
		}

	}

}
