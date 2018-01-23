int maxProfit(int* prices, int pricesSize) {
    
    
    int i, curr,j;
    int max=0, diff;
    for(i = 0; i < pricesSize-1; i++){
       // curr = prices[i];
        
        for(j = i+1; j < pricesSize; j++){
            diff = prices[j] - prices[i];
            if(diff > max){
                max = diff;
            }
        }
    }
    return max;
}