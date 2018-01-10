int removeDuplicates(int* nums, int numsSize) {
    
    if(numsSize <= 1) return numsSize;
     

    int i,temp = 0;
    
    for(i = 1;i<numsSize;i++){
        
        if(nums[temp]!=nums[i]){
            temp ++;
            nums[temp] = nums[i];
        }
    }
    return ++temp;
    
}