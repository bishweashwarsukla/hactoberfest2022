package recrusion;

public class Subsequences {
    static String[] finsSubsequences(String str){
        if(str.length()==0){
            return new String[]{""};
        }
        String smallAns[] = finsSubsequences(str.substring(1));
        String ans[] = new String[2*smallAns.length];
        for(int i = 0;i<smallAns.length;i++){
            ans[i] = smallAns[i];
        }
        for(int i = 0;i<smallAns.length;i++){
            ans[i+smallAns.length] = str.charAt(0) + smallAns[i];
        }
        return ans;
    }

    static void printSubsequences(String str, String outp){
        if(str.length() == 0){
            System.out.println(outp);
        }
        printSubsequences(str.substring(1),outp);
        printSubsequences(str,outp+str.charAt(0));
    }
    public static void main(String [] args){
        String str = "ABC";
        String ans[] = finsSubsequences(str);

        //printing the string:
        for(int i = 0 ; i < ans.length; i++){
            System.out.print(ans[i] + " ");
        }
        System.out.println();
//        printSubsequences(str,""); //index out of bound
    }
}
