void find(int arr[],N,target){
    for(int i=0;i<N;i++){
        if(arr[i]==target){
            printf("%d",i);
        }
    }
}

int main(){
    int target,N;
    scanf("%d",N);

    int arr[N];

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&target);

    find(arr,N,target);
    
    

}