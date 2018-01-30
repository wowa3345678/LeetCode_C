int titleToNumber(char* s) {
    

    int len = strlen(s);
    int i, ans=0;
    for(i = 0;i < len; i++){
        ans *=26;
        ans = ans + s[i] - 'A'+1;
    }
    
    return ans;
    
}