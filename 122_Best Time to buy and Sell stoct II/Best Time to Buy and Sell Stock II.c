int maxProfit(int* prices, int pricesSize) {
    
    int i, total;
    
    for(i = 1;i < pricesSize; i++){
        total += prices[i] > prices[i-1] ? prices[i]-prices[i-1]:0;
    }
    
    return total;
    
}