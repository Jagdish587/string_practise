#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char* my_strrchr(char* ptr , char ch)
{
	char* result ;
	for(;;ptr++) {
		if(*ptr == ch) result = ptr ;
		if(!*ptr) return result;
	}	
	
    return NULL;					
}

int main()
{
	char str[] = "This is my string" ;
	char * ptr ;
	
	ptr = strrchr(str,'i');
	
	cout<<"found at pos = "<<ptr-str+1;
	
	return 0;
}	

