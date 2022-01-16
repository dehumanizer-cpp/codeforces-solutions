#include <iostream>
#include <math.h>
#include <algorithm>


using namespace std;

#define ll long long
#define pi 3.14
#define yuvarla round
#define for_p(i,xi) for(int i=0;i<xi;i++)
#define inp_t int t; cin>>t
#define min_max(a,b) auto result=minmax({a,b})


int main(){
int lst[4],llst[3];

inp_t;
if(t<1 or t>pow(10,4)){
	return -1;
}

for_p(i,t){
	
	for(int y=0;y<4;y++){
		cin>>lst[y];
		if(lst[y]<1 or lst[y]>100){
			return -1;
		}
	}
	
	for_p(a,3) llst[a]=max(lst[a],lst[a+1]);
	
	if(min(lst[2],lst[3])>llst[0] or min(lst[0],lst[1])>llst[2] ) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	
	
	

}









return 0;
}
