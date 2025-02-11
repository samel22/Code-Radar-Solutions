int main(){
    int n,i,j,space;
    scanf("%d",&n);

    //top
    for(i=1;i<=n;i++){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }

    //bottom
    for(i=n-1;i>=1;i--){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }

}