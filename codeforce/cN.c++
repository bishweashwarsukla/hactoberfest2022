// void merge(int input[], int start,int mid, int end){
// //int mid=(si+ei)/2;
//     int i=start,j=mid+1,k=start;
//     int a[10001];
//     while(i<=mid&&j<=end)
//     {
//         if(input[i]<input[j])
//         {
//             a[k++]=input[i++];
//         }
//         else
//         {
//             a[k++]=input[j++];
//         }
//     }
//     while(i<=mid)
//     {
//         a[k++]=input[i++];
//     }
//     while(j<=end)
//     {
//         a[k++]=input[j++];
//     }
//     for(int l=start;l<=end;l++)
//     {
//         input[l]=a[l];
//     }
//     return;

// }

// void mergeSort(int input[],int start,int end){
//     if(start>=end){
//         return;
//     }
//     int mid = (start+end)/2;
//     mergeSort(input,start,mid);
//     mergeSort(input,mid+1,end);
//     merge(input,start,mid,end);

// }

// void mergeSort(int input[], int size){
// 	// Write your code here
//         mergeSort(input,0,size-1);
// }
