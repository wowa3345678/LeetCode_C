int reverse(int x) {
   
    int temp = 0, reversenum = 0;
    
    while(x != 0){
        temp = x %10;
        reversenum = reversenum*10 + temp;
        x = x/10;
    }
    

    
    return reversenum;
}