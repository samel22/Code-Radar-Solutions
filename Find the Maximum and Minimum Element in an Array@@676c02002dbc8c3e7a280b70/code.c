void max(int n,int arr[]){
    int intmax=arr[0];
    int intmin=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>intmax){
            intmax=arr[i];

        }

        else if(arr[i]<intmin){
            intmin=arr[i];
        }
    }
    printf("%d %d",intmin,intmax);

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    max(n.arr);
    }