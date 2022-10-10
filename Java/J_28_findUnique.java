public class J_28_findUnique {
    public static int findUnique(int arr[]){
        boolean flag = false;
        int num= arr[0];
        for( int i = 0;i<arr.length;i++){
            num = arr[i];
            flag = false;
            for(int j = 0;j<arr.length;j++){
                if(i==j){ continue; }
                if(arr[j] == num){ flag = true; } 
            }
            System.out.println(flag);
            if(!flag){
                return num;
            }
        }
        
        // else{
        //     return -1;
        // }
        return -1;
    }

    public static void main(String[] args) {
        int arr[] = {1,9,1,2,2,4,4,5,5,6};
        System.out.println(findUnique(arr));
    }
    
}
