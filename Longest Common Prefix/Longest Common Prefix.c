char* longestCommonPrefix(char** strs, int strsSize) {
    
    if(strsSize <=0) return "";
    
    char *answer = strs[0];
    
    int i,j;
    
    for(i = 1;i<strsSize;i++){
        
        j=0;
        
        while(answer[j] && strs[i][j] && answer[j]==strs[i][j])
            j++;
        
        answer[j] = '\0';
        
    }
    
    return answer;
    
}