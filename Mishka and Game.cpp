#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long
#define pi 3.14
#define yuvarla round
#define cint int t; cin>>t
#define minmax_(a,b,c) int result=minmax({a,b,c}).first
#define for_(a,b) for(int a=0;a<b;a++)




int main(){
int mishka=0,chris=0;
cint;


for_(i,t){
	int a,b;
	
	cin>>a>>b;
	if(a>b) mishka++;
	else if(a<b) chris++;		
}

if(mishka>chris) cout<<"Mishka";
else if(chris>mishka) cout<<"Chris";
else cout<<"Friendship is magic!^^";



return 0;
}
