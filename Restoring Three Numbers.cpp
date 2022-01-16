#include <iostream>
#include <math.h>

using namespace std;






int main () {
int a,b,c,abc;

cin>>a>>b>>c>>abc;



int ay[2]={max(a,b),min(a,b)};
int ax[2]={max(c,abc),min(c,abc)};
int abc1[2]={max(ay[0],ax[0]),min(ay[0],ax[0])};
int abc2[2]={max(ay[1],ax[1]),min(ay[1],ax[1])};

int xxy[4]={abc2[1],abc1[1],abc2[0],abc1[0]};

int x,y,z;

x=xxy[3]-xxy[2];
y=xxy[3]-xxy[1];
z=xxy[3]-xxy[0];

cout<<x<<" "<<y<<" "<<z;






	
	
	
	


   
   
   
   
   
   return 0;
}
