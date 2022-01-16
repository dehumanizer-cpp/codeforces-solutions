#include <iostream>
#include <string>

using namespace std;

#define ll long long
#define pi 3.14
#define yuvarla round
#define for_p(i,k) for(int i=0;i<k;i++)
#define inp_n int n; cin>>n


int main(){
double s=0;
inp_n;

if(n<1 || n>100){
	return -1;
}

int lst[n];


for_p(i,n){
	cin>>lst[i];
	if(lst[i]<0 || lst[i]>100){
		return -1;
	}
}
for_p(i,n){
	s+=lst[i];
}

cout<<s/n;


return 0;
}
