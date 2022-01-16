#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long
#define pi 3.14
#define yuvarla round
#define cint int t; cin>>t
#define minmax_(a,b,c) int result=minmax({a,b,c}).first



long int i;
vector<int> myvector;
int func(){
	for(i=1;i<pow(10,1);i++) myvector.pb(i);
	for(i=11;i<pow(10,2);i+=11) myvector.pb(i);
	for(i=111;i<pow(10,3);i+=111) myvector.pb(i);
	for(i=1111;i<pow(10,4);i+=1111) myvector.pb(i);
 	for(i=11111;i<pow(10,5);i+=11111) myvector.pb(i);
 	for(i=111111;i<pow(10,6);i+=111111) myvector.pb(i);
 	for(i=1111111;i<pow(10,7);i+=1111111) myvector.pb(i);
 	for(i=11111111;i<pow(10,8);i+=11111111) myvector.pb(i);
 	for(i=111111111;i<pow(10,9);i+=111111111) myvector.pb(i);
}

	
int main(){
func();
cint;
for(i=0;i<t;i++){
	int a;
	cin>>a;
	int val=0;
	for(int b=0;b<a;b++){
		if(b==81) goto ct;
		else if(myvector[b]<=a) val++;	
	}	
	ct:
	cout<<val<<endl;
}




return 0;
}
