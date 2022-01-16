#include <iostream>
#include <cmath>

using namespace std;

#define ll long long

int func(ll int &x){
try{


if(x<1 ||x>pow(10,6)){
	throw 12;
}

}
catch(int th){
	if(th==12){
		return -1;
	}
}
}


int main(){
int walk[5]={5,4,3,2,1};
ll int x;
cin>>x;
func(x);
int y=0;

for(int i=0;i<5;i++){
	y+=x/walk[i];
	x=x%walk[i];
}


cout<<y;




return 0;
}
