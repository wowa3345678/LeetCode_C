bool isAnagram(char* s, char* t) {
    
    if(s == NULL || t == NULL) return false;
    
    int lens = strlen(s);
    int lent = strlen(t);
    
    if(lens != lent) return false;
    
    int temp[26] = {0};
    int i;
    
    for(i = 0; i < lens; i++){
        temp[s[i] - 'a']++;
    }
    
    for(i = 0; i < lent; i++){
        temp[t[i] - 'a']--;
    }
    
    for(i = 0 ;i < 26; i++){
        if(temp[i] != 0){
            return false;
        }
    }
    
    return true;
    
    
}