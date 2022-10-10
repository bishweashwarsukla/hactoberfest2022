import java.util.Scanner;

public class J_39_checkPalinfromeRec {
    static boolean isPalin(String str,int i){
        if(i>=str.length()){
            return true;
        }
        if(str.charAt(i)!=str.charAt(str.length()-1-i)){
            return false;
        }
        return isPalin(str, i+1);
    }
    public static void main(String[] args) {
    
        Scanner cin = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = cin.next();
        System.out.println("is Palindrome: " + isPalin(str,0));
    }
    
}
