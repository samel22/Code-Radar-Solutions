void inc(int n, int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i+1]>arr[i]) printf("Sorted");
        else printf("Not Sorted");
    }
}

int main(){
    int n,arr[n];
    scanf("%d",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    inc(n,arr);
}