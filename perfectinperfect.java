import java.util.*;
public class perfectinperfect {
    static boolean persq(double n) {
        double sqrt = Math.sqrt(n);
        double round = sqrt - Math.round(sqrt);
        if (round == 0) {
            return true;
        } else
            return false;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        double mul = 1;
        while (t-- > 0) {
            int n = sc.nextInt();
            int m[] = new int[n];
            for (int i = 0; i < n; i++) {
                m[i] = sc.nextInt();
            }
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                }

                if (persq(mul)) {
                    System.out.println("yes");
                } else
                    System.out.println("no");
            }
        }
    }
}
