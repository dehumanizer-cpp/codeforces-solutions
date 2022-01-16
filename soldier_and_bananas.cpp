#include <iostream>
#include <cmath>


using namespace std;

int main(){

int k,n,w;
int val=0;

try{

cin>>k;
cin>>n;
cin>>w;
if(n>pow(10,9)|| n<0){
	throw 12;
}
if(k<1 || k>pow(10,3) ||w>pow(10,3) || w<1){
	throw 15;
}
}
catch(int th){
	if(th==12 || th==15){
		return -1;
	}
}

for(int i=1;i<=w;i++){
	val+=i*k;
}

int y=val-n;
if(y<0){
	cout<<0;
}
else{
	cout<<y;
}

return 0;
}
