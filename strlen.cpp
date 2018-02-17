#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int my_strcpy(const char *src)
{
   int len = 0;
   
   while(*src) {
	len++ ; src++ ;
	}   
	
    return len;
}

int main()
{
	
	char src[]  = "Jagdish Tirumala" ;
			
	cout<<"my_strcat = "<<my_strcpy(src);
	
	return 0;
}	

