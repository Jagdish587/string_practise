#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num = 0x34;
	int p1 = 1;
	int p2 = 5;

	cout<<"val = "<<bitset<8>(num)<<endl;
	

	bool val1 = (num & (0x1<<p1)) >> p1 ;
	bool val2 = (num & (0x1<<p2)) >> p2 ; 
		
	
	if(val1 ^ val2) {
		int val = (0x1<<p1) | (0x1<<p2) ;
		num = num ^ val ;
	} 
	
	cout<<"val = "<<bitset<8>(num)<<endl;
	
	return 0;
	
}	

