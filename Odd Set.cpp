#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long
#define pi 3.14
#define yuvarla round
#define cint int t; cin>>t
#define minmax_(a,b,c) int result=minmax({a,b,c}).first


int main(){

cint;

for(int i=0;i<t;i++){
	int b;
	cin>>b;
	int val=0;
	int val0=0;
	for(int a=0;a<b*2;a++){
		int s;
		cin>>s;
		if(s%2==0) val++;
		else val0++;	
	}
	
	if(val==val0) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
}

return 0;
}
