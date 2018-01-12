/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    int i,j,count = 0 ,carry = 1;
    int *result = malloc((digitsSize)*sizeof(int));
    for(i=digitsSize-1; i>=0 || carry;i--){
        int n = digits[i] + carry;
        result[count] = n%10;
        carry = n/10;
        count ++;
    }
    
    for (i = 0, j = count - 1; i < j; i++, j--) {
        int tmp = result[i];
        result[i] = result[j];
        result[j] = tmp;
    }
    *returnSize = count;
    return result;
}