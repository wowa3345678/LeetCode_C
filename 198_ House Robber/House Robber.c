int max(int a, int b){
    return a > b ? a : b;
}

int rob(int* nums, int numsSize) {
    int i;
    if(numsSize == 0) return 0;
    if(numsSize == 1) return nums[0];
    if(numsSize == 2) return nums[0] > nums[1] ? nums[0] : nums[1];
    
    int *f = malloc(numsSize * sizeof(int));
    
    f[0] = nums[0];
    f[1] = max(nums[0], nums[1]);
    

    for(i = 2; i < numsSize; i++){
        f[i] = max(f[i-2] + nums[i],f[i-1]);
    }
    
    return f[numsSize-1];
}