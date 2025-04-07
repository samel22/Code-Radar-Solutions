int check(int num){
    
        if(num<2 return 0);
        for(int i=2;i*i<num;i++){
            if(num%i==0) return 0;
            else return 1;
        }
    }


int count(int N, int arr[]){
    int count=0;
    for(int i=0;i<N;i++){
    if(check(num)) count++;
    }
    return count;
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++) scanf("%d",&arr[i]);

    int result=count(N,arr);
    printf("%d",result);


    
}