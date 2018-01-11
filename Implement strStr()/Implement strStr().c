int strStr(char* haystack, char* needle) {
    
    int i,j;
    int len_h = strlen(haystack);
    int len_n = strlen(needle);
    
    if (len_n == 0) {
        return 0;
    }
    
    for(i = 0;i<len_h;i++){
        int found =1;
        if(haystack[i]==needle[0] ){
             for(j=1;j<len_n;j++){
                 if(i+j<len_h){
                    if(needle[j]!=haystack[i+j]){
                        found = 0;
                        break;
                    }    
                 }
                 else return -1;
            }
            if(found)
                return i;

        }
        
    }
    return -1;
    
}