#include <bits/stdc++.h>
using namespace std;


char* my_strchr(char* ptr , char ch)
{
	
	for(;;ptr++) {
		if(*ptr == ch) return ptr ;
		if(!*ptr) return NULL;
	}	
	
    return NULL;					
}	
00
int main()
{
	char str[] = "This is string";
	char *ptr ;
	
	ptr = my_strchr(str,'s');
	
	while(ptr!=NULL) {
		cout<<"found at pos = "<<ptr-str+1<<endl;
		ptr = my_strchr(ptr+1,'s');
	}	
	
    return 0;
}	

