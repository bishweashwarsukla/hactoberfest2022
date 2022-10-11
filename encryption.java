import java.util.*;
public class encryption {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        s = s.replaceAll("\\s", "");
        int l = s.length();
        int row = (int) Math.floor(Math.sqrt((double) l));
        int column = (int) Math.ceil(Math.sqrt((double) l));

        if (row * column < l) {
            if (row < column)
                row++;
            else
                column++;
        }
        char m[][] = new char[row][column];

        int c = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (c < l) {

                    m[i][j] = s.charAt(c);
                    c++;
                }

            }

        }

        int d = 0;
        for (int i = 0; i < column; i++) {
            for (int j = 0; j < row; j++) {

                System.out.print(m[j][i]);


            }

            if (i < column - 1)
                System.out.print(" ");
        }


    }
}


