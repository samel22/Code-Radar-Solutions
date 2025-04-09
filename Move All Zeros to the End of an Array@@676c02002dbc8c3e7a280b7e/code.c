void moveZeroes(int nums, int numsSize) {
    int insertpos=0; //nums = [0, 1, 0, 3, 12]


    for(int i=0;i<numsSize;i++){ //num[0], num[2] skipped
        if(nums[i]!=0){ 
            nums[insertpos]=nums[i]; //nums[0]=num[1], num[0+1]=nums[3], num[1+1]=num[3], nums[2+1]=num[4]
            insertpos++;
        }
    }

   //this executes after upper finishes
   //last insertpos=3
    while(insertpos<numsSize){ //checks (3<5), (4<5), (4!<5) so loop ends
        nums[insertpos++]=0; //nums[3]=0, num[4]=0
    }
    
}//{1,}

int main(){
    int numsSize;
    scanf("%d",&numsSize);
    int nums[numsSize];
    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[numsSize]);
    }

    moveZeroes(nums,numsSize);

    for(int i=0;i<numsSize;i++){
        printf("%d",nums[i]);
    }


}