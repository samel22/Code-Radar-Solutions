int sumofdigits(int num){
    int sum=0;
    while(num!=0){
        int digit=num%10;
        sum+=digit;
        num/=10;
    }
    return sum;
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<N;i++){
    int sumdigit=sumofdigits(arr[i]);
    printf(" %d",sumdigit);
    }
}