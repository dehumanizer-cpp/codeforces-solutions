#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main(){
	int a,b,y;
	int k=0;
	cin>>y;
	
	
while(y>k){
	cin>>a>>b;
	if(a>=24 || a<0 || b>=60 || b<0){	
		return 0;
	}
	if(a==0 && b==0){
		return 0;
	}
	else{
		int xy=1440-(a*60+b);
		cout<<xy<<endl;
	
	}
	k++;
	}
	return 0;
}
