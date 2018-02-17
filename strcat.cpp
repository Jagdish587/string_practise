#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char * my_strcat(char *dest, const char *src)
{
    char *rdest = dest;

    while (*dest)
      dest++;
    
    while (*src) {
		*dest++ = *src++ ;
	}
    return rdest;
}

int main()
{
	char dest[100] = "Jagdish" ;
	char src[]  = "Tirumala" ;
			
	cout<<"my_strcat = "<<my_strcat(dest,src);
	
	return 0;
}	

