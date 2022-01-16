#include <iostream>
#include <string>



using namespace std;

#define ll long long
#define pi 3.14
#define yuvarla round
#define for_p(i,xi) for(int i=0;i<xi;i++)
#define inp_t int t; cin>>t
#define min_max(a,b) auto result=minmax({a,b})


int main(){
string a,b;
string k="";
cin>>a;
cin>>b;



if(a.size()!=b.size() or a.size(),b.size()>100){
	return -1;
}
else{
	for_p(i,a.size()){
		if(a[i]!=b[i]) k+="1";
		else k+="0";
	}
	
	cout<<k;
}





return 0;
}
