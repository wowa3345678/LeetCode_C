uint32_t reverseBits(uint32_t n) {
    
    uint32_t res = 0;
    int i;
    
    for(i = 0; i< 32; i++){
        
        res <<= 1;
        res |= n&0x1;
        n >>=1;
    }
    
    return res;
        
    
}