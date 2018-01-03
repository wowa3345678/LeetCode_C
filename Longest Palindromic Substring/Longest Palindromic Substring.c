void find(char *s, int len, int low, int high,int *max_size, char *answer)
{
    while(s[low] == s[high] && low >= 0 && high < len){
        low --;
        high ++;
    }
    low ++;
    high --;
    
    if(high - low +1  > *max_size){
        *max_size = high - low +1;
        memcpy(answer, s+low, *max_size);
    }
}

char* longestPalindrome(char* s) {
    int len = strlen(s);
    if (len <=1) return s;
    if (s == NULL) return s;
    
    char *answer = malloc(1000);
    memset(answer, 0, sizeof(answer));
    
    int max_size = 0;
    
    for(int i=0;i<len;i++){
        find(s, len, i, i, &max_size, answer);
        find(s, len, i, i+1, &max_size, answer);
    }
    
    return answer;
}