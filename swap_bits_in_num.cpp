#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num = 0x34;
	
	cout<<"val = "<<bitset<8>(num)<<endl;
	
	bool val1 = (num & (0x1<<1)) >> 1 ;
	bool val2 = (num & (0x1<<4)) >> 4 ; 
		
	
	if(val1 ^ val2) {
		int val = (0x1<<1) | (0x1<<4) ;
		num = num ^ val ;
	} 
	
	cout<<"val = "<<bitset<8>(num)<<endl;
	
	return 0;
	
}	

