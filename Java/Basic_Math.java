public class Basic_Math {

    public static void main(String[] args) {
        int x = 10;
        int y = 25;
        //To find maximum
        System.out.println(Math.max(x, y));
        //To find minimum
        System.out.println(Math.min(x, y));
        //To find absolute value
        System.out.println(Math.abs(-2.45f));
        //To find sq root
        System.out.println(Math.sqrt(64));
        //To find cube root
        System.out.println(Math.cbrt(27));
        ////To find power of
        System.out.println(Math.pow(x, 2));

        //ceil
        System.out.println("Round of with greater than or equal to 89.1->" + Math.ceil(89.1));

        //floor
        System.out.println("Round of with less than or equal to  49.9->" + Math.floor(49.9));

        //round
        System.out.println("Round of based on decimal value < .5  give before value -9.41->" 
                + Math.round(-9.41)
                + "\nRound of based on decimal value > .5  give after value  9.78->" 
                + Math.round(9.78));

        //Negative values will give -1 , pos +1 and infinity 0 signum()
        System.out.println("\nSignum of positive value->" + Math.signum(49.9f)
                + "\nSignum of negative value->" + Math.signum(-49.9f)
                + "\nSignum of infinity value->" + Math.signum(0.0 / 0)
                + "\nSignum of zero value->" + Math.signum(0.0f));

        //Floor division
        int x1 = 25;
        int y1 = 3;
        System.out.println("Floor div: 25/3 =8.33-> " + Math.floorDiv(x1, y1));

        System.out.println("Floor mod: 25%3 =1.0-> " + Math.floorMod(x1, y1));
        
        Double f= Math.random();
        //to limit decimal values use this.. String.format() method 
        //but this will change here only it will not update
        System.out.println("Random number with 4 decimal point values:" 
                + String.format("%.3f",f) );
        
        //to change now it is stored in 
        
        f = (double)(Math.round(f*1000.0)/1000.0);
        System.out.println(f); 
     
    }
}
