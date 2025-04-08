int pal(int N,int arr[]){
    int count=0, start=0,end=N-1;
    while(i<j){
        if(arr[i]==arr[j]){
            count++;
        }
        i++;
        j--;
    }
    printf("%d",count);
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
}