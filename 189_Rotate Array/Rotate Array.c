//Solution 1:
void rotate(int* nums, int numsSize, int k) {
    
    
    int temp[numsSize];
    int i;
    
    
    for(i=0;i<numsSize;i++){
        temp[i]=nums[i];     
        
        
        
        
    }
    
    if(k!=0)
    for(i=0;i<numsSize;i++){
       
        nums[(i+k)%numsSize]=temp[i];     
           
        
        
    }
	
}
//Solution 2
void reverse(int* nums, int lo, int hi){
    
    int temp = 0;
    while(hi > lo){
        temp = nums[lo];
        nums[lo] = nums[hi];
        nums[hi] = temp;
        
        hi--;
        lo++;
    }

    
    
}

void rotate(int* nums, int numsSize, int k) {

    k = k%numsSize;
    if (k==0){
        return;
    }
    
    reverse(nums, 0, numsSize-k-1);
    reverse(nums, numsSize-k, numsSize-1);
    reverse(nums, 0, numsSize-1);
    
}