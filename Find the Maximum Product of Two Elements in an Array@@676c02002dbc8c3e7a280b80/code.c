int maxproduct(int N, int arr[]){
    int maxpr=arr[0]*arr[1];
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]*arr[j]>maxpr){
                maxpr=arr[i]*arr[j];
            }
        }

    }
    printf("%d",arr[i]*arr[j]);
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
}