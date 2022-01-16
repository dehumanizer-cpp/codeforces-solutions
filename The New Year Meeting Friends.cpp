#include <iostream>

using namespace std;


int main(){
	int x1,x2,x3;
	
	cin>>x1>>x2>>x3;
	int y[2]={max(x1,x2),min(x1,x2)};
	int r[]={min(y[1],x3)};
	int a[2]={max(y[0],x3),min(y[0],x3)};
	
	
	int k[3]={r[0],a[1],a[0]};
	
	
	int ss=((k[2]-k[1])+(k[2]-k[0])+(k[1]-k[0]))/2;
	
	

	if(k[0]>100 || k[0]<1 || k[1]>100 || k[1]<1 || k[2]>100 ||k[2]<1 ){
		
		return 0;
		
	}
	else{
		cout<<ss;
	}
	
	
	
	return 0;
}
