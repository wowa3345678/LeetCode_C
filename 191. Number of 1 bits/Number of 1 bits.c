int hammingWeight(uint32_t n) {
    
    int i;
    int count = 0;
    
    while(n){
        if((n&0x01 == 1)){
            count ++;
        }
        
        n >>= 1;  
    }  
           
    return count;
}