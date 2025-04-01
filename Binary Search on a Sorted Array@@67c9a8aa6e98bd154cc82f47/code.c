void binarySearch(int arr[], int n, int target){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j+1]=arr[j];
                temp=arr[j+1];
            }
        }
    }

}