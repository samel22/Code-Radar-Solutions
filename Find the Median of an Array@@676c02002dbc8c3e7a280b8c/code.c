void mid(int n, int arr[]){
    int med=(0+n-1)/2;
    printf("%d",arr[med]);

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mid(n,arr);
    return 0;
}