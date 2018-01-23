void quicksort(int *nums, int start, int end){
    if(start >= end){
        return;
    }
    
    int left = start, right = end, pivot = nums[(start+end)/2];
    
    while(left <= right){
        while (left <=right && nums[left] < pivot){
            ++left;
        }
        while(left <= right && nums[right] > pivot){
            --right;
        }
        if(left <=right){
            int tmp = nums[left];
            nums[left] = nums[right];
            nums[right] = tmp;
            ++left;
            --right;
        }
    }
    
    quicksort(nums, start, right);
    quicksort(nums, left, end);
}

int singleNumber(int* nums, int numsSize) {
/*   O(n) time + O(1) space
    int i, s=0;
    
    for(i = 0;i < numsSize; i++){
        s ^= nums[i];
    }
    
    return s;
    
*/    
// quicksort
    if(numsSize>1)
        quicksort(nums, 0, numsSize-1);
    else
        return nums[0];
    
    for(int i = 0; i < numsSize-1; i+=2){
        if(nums[i] != nums[i+1]){
            return nums[i];
        }
    }
    return nums[numsSize-1];
}

