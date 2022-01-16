#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long
#define pi 3.14
#define yuvarla round
#define cint int t; cin>>t
#define minmax_(a,b,c) int result=minmax({a,b,c}).first
#define for_(a,b) for(int a=0;a<b;a++)

vector <int> myvector;


int main(){
int k=0;

cint;


for_(i,t){
	int a,b;
	cin>>a>>b;
	
	k=k-a;
	k=k+b;
	myvector.pb(k);

}

auto result=minmax_element(myvector.begin(),myvector.end());
cout<<*result.second;

return 0;
}
