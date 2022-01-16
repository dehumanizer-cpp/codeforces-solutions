#include <iostream>
#include <math.h>


using namespace std;

#define ll long long
#define pi 3.14
#define yuvarla round
#define for_p(i,xi) for(int i=0;i<xi;i++)
#define inp_t int t; cin>>t
#define min_max(a,b,c) int result=minmax({a,b,c}).second


int facto(int y){
	int val0=1;
	for(int i=y;i>1;i--)
	{
		val0=val0*i;
	}
	
	return val0;
}



int main(){
int l=0;
int r=0;
inp_t;

if(t<1 or t>pow(10,5)){
	return -1;
}
else{
	string s;
	cin>>s;
	if(s.size()<1 or s.size()>pow(10,5)) return -1;
	
	else{
	
	for_p(f,t){

	char k=s[f];
	
	if(k=='L') l++;
	else if(k=='R') r++;
	else return -1;
			
		}	}
		
cout<<r+l+1;
}







return 0;
}
