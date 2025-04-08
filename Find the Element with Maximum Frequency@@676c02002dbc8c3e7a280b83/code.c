int check(int N, int arr[]){
    int element=0, count=0;
    for(int i=0;i<N;i++){
        if(count==0){
            element=arr[i];
        }

        if(element==arr[i]){
            count++;
        }

        else{
            count--;
        }
    }
    count=0;
    for(int i=0;i<N;i++){
        if(element==arr[i]){
            count++;
        }
    }

    if(count>N){
        return element;
    }
    return -1;

}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++) scanf("%d",&arr[i]);
    check(N,arr);
}