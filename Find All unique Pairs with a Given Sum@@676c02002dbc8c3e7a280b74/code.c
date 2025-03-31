int find(){

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i] != arr[j]){
                if(arr[i]+arr[j]==T){
                    printf("%d %d",i,j);
                }
            }
        }
    }

}

int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    scanf("%d",&arr[N]);

    int T;
    scanf("%d",&T);
}