import java.util.Scanner;
public class armstrongNumber
{
	public void isArmstrong(String n)
	{
		char[] s = n.toCharArray();
		int size = s.length;
		int sum = 0;
		for (char num : s)
		{
			int temp = 1;
			int i = Integer.parseInt(Character.toString(num));
			for (int j = 0; j <= size - 1; j++)
			{
				temp *= i;
			}
			sum += temp;
		}
		if (sum == Integer.parseInt(n))
		{
			System.out.println("True");
		}
		else
		{
			System.out.println("False");
		}
	}
	public static void main(String[] args)
	{
		armstrongNumber am = new armstrongNumber();
        Scanner myObj = new Scanner(System.in);
        String Number;
        System.out.println("Enter number "); 
        Number = myObj.nextLine();   
		am.isArmstrong(Number);
	}
}
