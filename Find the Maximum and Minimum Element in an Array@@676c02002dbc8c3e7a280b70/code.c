void max(int n,int arr[]){
    intmax=arr[0];
    intmin=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>intmax){
            intmax=arr[i];

        }

        else if(arr[i]<intmix){
            intmin=arr[i];
        }
    }
    printf("%d",intmax);

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    }