/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    
    int *result = malloc((rowIndex + 1) * sizeof(int));
    *returnSize = rowIndex +1;
    
    int num = rowIndex + 1;
    
    if(rowIndex <1){
        result[0] = 1;
        return result;
    }
    
    int i,j;
    
    for(i = 1; i <= rowIndex; i++){
        num = i + 1;
        result[0] = 1;
        result[num - 1] = 1;
        
        for(j = num - 2; j >=1 ; j--){
            result[j] = result[j-1]+result[j]; 
        }
    }
    
    return result;

}