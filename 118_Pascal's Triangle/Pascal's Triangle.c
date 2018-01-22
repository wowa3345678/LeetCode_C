/**
 * Return an array of arrays.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int** columnSizes) {
    
    int **tri = malloc(numRows * sizeof(int *));
    *columnSizes = malloc(numRows * sizeof(int *));
    
    for(int i =0; i < numRows ; i ++){
        int nums = i + 1;
        (*columnSizes)[i] = nums;
        tri[i] = malloc(nums * sizeof(int));
        tri[i][0] = 1;             // the first one and last one always be 1
        tri[i][nums - 1] = 1;
        
        for(int j = 1; j <= nums - 2 ; j++){
            tri[i][j] = tri[i-1][j-1]+tri[i-1][j];
        }
    }
    
    return tri;
}