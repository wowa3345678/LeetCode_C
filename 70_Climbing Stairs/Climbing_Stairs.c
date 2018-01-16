int climbStairs(int n) {
    
    if(n<=1) return n;
    int i,answer;
    
    int pre = 1;
    int curr = 1;
    for(i=2 ; i<=n ; i++){
        int temp = curr;
        curr = curr + pre;
        pre = temp;
    }
    
    return curr;
    
}