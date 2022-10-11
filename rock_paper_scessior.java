import java.util.*;
 class rock_paper_scissor {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String choices[]={"Rock","paper","scissor"};
        int playerwin=0;
        int compwin=0;
        int chance=0;
        System.out.println("Press 1 for rock,2 for paper,3 for scissor");
        while(chance!=5){
            int pc= sc.nextInt();
            if(pc>=1&&pc<=3){
            System.out.println(choices[pc-1]);
            int cc=(int)Math.floor(Math.random()*(3));
            System.out.println(choices[cc]);

            if(pc-1==0&&cc==2||pc-1==1&&cc==0||pc-1==2&&cc==1)playerwin++;
            else if(cc==0&&pc-1==2||cc==1&&pc-1==0||cc==2&&pc-1==1)compwin++;
                chance++;
        }
            if(playerwin>=3||compwin>=3)break;
        }
        if(compwin>playerwin)System.out.println("computer win with score "+compwin);
        else if (compwin<playerwin)System.out.println("Player win with score"+playerwin);
        else System.out.println("TIE");
    }
}
