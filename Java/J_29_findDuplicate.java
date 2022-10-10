public class J_29_findDuplicate {
    public static int findDuplicate(int arr[]){
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
            if(flag){
                return num;
            }
        }
        
        // else{
        //     return -1;
        // }
        return -1;
    }

    public static void main(String[] args) {
        int arr[] ={0, 7, 2, 5, 4, 7, 1, 3, 6}; // 7 is duplicate
        int arr2[] = {0, 3, 1, 5, 4, 3, 2}; // 3 duplicate
        System.out.println(findDuplicate(arr2));
    }
    
}
