int binarySearch(int arr[], int n, int target){
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target) return mid;

        else if(arr[mid]<target) low=mid+1;

        else hight=mid-1;
    }
    return -1;

}