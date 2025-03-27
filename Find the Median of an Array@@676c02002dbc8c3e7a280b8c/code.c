void mid(int n, int arr[]){
    int mid=(0+n-1)/2;
    printf("%d",arr[mid]);

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}