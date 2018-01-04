typedef struct
{
    int i;
    char c;
}romanMap_t;
int map_find(romanMap_t* map, int n, char c)
{
	int i = 0;
	for(i=0; i< n; i++)
	{
		if((map+i)->c == c)
			return (map+i)->i;
	}
	return i;
}
int romanToInt(char* s) {
    romanMap_t map[7];
    map[0].i = 1;map[0].c = 'I';
    map[1].i = 5;map[1].c = 'V';
    map[2].i = 10;map[2].c = 'X';
    map[3].i = 50;map[3].c = 'L';
    map[4].i = 100;map[4].c = 'C';
    map[5].i = 500;map[5].c = 'D';
    map[6].i = 1000;map[6].c = 'M';
    int value = 0;
    char c = 0;
    int  i = 0;
    while(*s)
    {
    	if(c == 0)
    	{
    		value = map_find(map, 7, *s);
    		c = *s;
    		s++;
    		continue;
    	}
    	else
    	{
    		int a = map_find(map, 7, c);
    		int b = map_find(map, 7, *s);
    		if(a >= b)
    			value += b;
    		else
    			value += b-2*a;
    		c = *s;
    	  s++;
    	}
    }
    return value;
}