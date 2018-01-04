static int romanIntTr(char roman){
    
    switch(roman){
        case 'I':
                return 1;
           
        case 'V':
                return 5;
            
        case 'X':
                return 10;
            
        case 'L':
                return 50;
                     
        case 'C':
                return 100;
            
        case 'D':
                return 500;
            
        case 'M':
                return 1000;
        default:
            return 0;
    }
}

int romanToInt(char* s) {
    
    int len = strlen(s);
    int temp = romanIntTr(s[0]);

    for(int i=1;i<= len;i++){
        int now = romanIntTr(s[i]);
        int pre = romanIntTr(s[i-1]);
        if(pre < now){
            temp = temp + now - 2*pre;
            
        }
        else{
            temp = temp +now;
        }
    }
    return temp;
    
}