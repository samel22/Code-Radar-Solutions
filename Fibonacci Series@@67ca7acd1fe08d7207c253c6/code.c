int fib(int n){
    int n1=0, n2=1;
    int curr=n1+n2;
    printf("%d",curr);
    n2=n1;
    n1=curr;

}