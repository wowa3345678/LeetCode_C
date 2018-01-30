int majorityElement(int* nums, int numsSize) {
    
    int i;
    int count = 0, curr;
    
    for(i = 0; i < numsSize; i++){
        if(count == 0){
            curr = nums[i];
            count++;
        }
        else{
            if(curr == nums[i])
                count++;
            else
                count--;
        }
    }
    return curr;
}