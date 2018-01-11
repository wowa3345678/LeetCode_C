int maxSubArray(int* nums, int numsSize) {
    int i, temp = 0,max = INT_MIN;
    
    for(i=0;i<numsSize;i++){
        temp+= nums[i];
        
        max = temp > max? temp: max;
        
        if(temp < 0)
            temp = 0;
        
    }
    return max;
}