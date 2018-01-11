int searchInsert(int* nums, int numsSize, int target) {
    
    int i, temp;
    int found =0;
    
    if(nums[0]> target) return 0;
    if(nums[numsSize-1]<target) return numsSize;
    
    
    for(i=0;i<numsSize;i++){
        if(nums[i] == target){
            return i;
        }
        else{
            if(nums[i]<target && nums[i+1]>target)
                found = i+1;
        }
    }
    
    return found;
}