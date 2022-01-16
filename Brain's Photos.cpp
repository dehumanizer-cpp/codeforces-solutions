#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long
#define pi 3.14
#define yuvarla round
#define cint int t; cin>>t
#define minmax_(a,b,c) int result=minmax({a,b,c}).first

vector<char>myvector;

int val,val1;
char color[3]={'C','M','Y'};

	
int main(){

int n,m;
cin>>n>>m;

for(int i=0;i<m*n;i++){
	char a;
	cin>>a;	
	myvector.pb(a);
}
for(int s=0;s<m*n;s++){

for(int y=0;y<3;y++){
	if(myvector[s]==color[y])val=1;
	else val1=1;
}
}

if(val==1) cout<<"#Color"<<endl;
else cout<<"#Black&White"<<endl;






return 0;
}
