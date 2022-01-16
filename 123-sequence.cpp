#include <iostream>
#include <math.h>
#include <algorithm>


using namespace std;

#define ll long long
#define pi 3.14
#define yuvarla round
#define for_p(i,xi) for(int i=0;i<xi;i++)
#define inp_t int t; cin>>t
#define min_max(a,b,c) int result=minmax({a,b,c}).second


int main(){
int x1=0;
int x2=0;
int x3=0;

inp_t;

if(t<1 or t>pow(10,6)) return -1;

else{
	
for_p(i,t){
	int val;
	cin>>val;
	if(val<1 or val>3) return -1;
	else if(val==3) x3++;
	else if(val==2) x2++;
	else if(val==1) x1++;
	
}
min_max(x3,x2,x1);
cout<<t-result;
}



return 0;
}
