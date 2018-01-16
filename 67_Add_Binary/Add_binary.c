char* addBinary(char* a, char* b) {
    int al = strlen(a);
    int bl = strlen(b);
    int count = 0, plus=0;
    int len = al > bl ? al+1 : bl+1;
    char *answer;
    answer = malloc(len+1);
    
    answer[len] = '\0';
    answer[len-1] = '\0';
    
    int i,j;
    len = 0;
    for(i = al-1, j = bl-1; count || i>=0 || j>=0; i--,j--){
        int na=0;
        int nb=0;
        
        na = i>=0 ? a[i]-'0':0;
        nb = j>=0 ? b[j]-'0':0;
        
        answer[len]= (na ^ nb ^ count) + '0';
        count = count+na+nb>=2?1:0;
        len ++;
    }
    
    for(i=0,j = len -1; i <j;i++,j--){
        char c = answer[i];
        answer[i] = answer[j];
        answer[j] = c;
    }
    
    return answer;
}