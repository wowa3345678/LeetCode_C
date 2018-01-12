// Case 1 5ms code
int lengthOfLastWord(char* s) {
    
    int len=0;
    while(*s != '\0'){
        if(s[-1] == ' ' && s[0] != ' ') {
            len = 1;
        }
        else if(*s != ' '){
            len++;
        }      
        s++;
    }
    return len;
}


// Case 2 0ms code
int lengthOfLastWord(char* s) {
    int i;
    int counter = 0;
    for ( i = strlen( s ) - 1; s[ i ] == ' '; i-- ){ }
    for ( i ; s[ i ] != ' ' && i >= 0; i-- ){
        counter++;
    }
    return counter;
}