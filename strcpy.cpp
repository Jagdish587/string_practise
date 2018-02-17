#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char * my_strcpy(char *dest, const char *src)
{
    char *rdest = dest;
    
    while (*src) {
		*dest++ = *src++ ;
	}
    return rdest;
}

int main()
{
	char dest[100] = "" ;
	char src[]  = "Jagdish" ;
			
	cout<<"my_strcat = "<<my_strcpy(dest,src);
	
	return 0;
}	

