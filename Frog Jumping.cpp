#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long
#define pi 3.14
#define yuvarla round
#define cint int t; cin>>t
#define minmax_(a,b,c) int result=minmax({a,b,c}).first


ll int arr[3];	
int main(){

cint;

for(int i=0;i<t;i++){
	ll int val=0;
	cin>>arr[0]>>arr[1]>>arr[2];
	for(int a=0;a<arr[2];a++){
		if(arr[2]%2==0){
			val=((arr[2]/2)*arr[0])-((arr[2]/2)*arr[1]);
		}
		else{
			ll int s=(arr[2]-1)/2;
			val=((s+1)*arr[0])-(arr[1]*s);
			
		}
		
	}
	
	
cout<<val<<endl;	
}




return 0;
}
