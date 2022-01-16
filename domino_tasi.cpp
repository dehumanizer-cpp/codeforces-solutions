#include <iostream>


using namespace std;

int main(){

int a,b,val;
try{

cin>>a;
cin>>b;
if(a>b){
	throw 12;
}
if(a<1 || b>16 ||a>16 || b<1){
	throw 15;
}
}
catch(int th){
	if(th==12 || th==15){
		return -1;
	}
}

val=(a*b)/2;

cout<<val;
	
	return 0;
}


