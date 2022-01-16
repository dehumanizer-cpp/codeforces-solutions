#include <iostream>


using namespace std;

#define ll long long
#define pi 3.14
#define yuvarla round
#define for_p(i,xi) for(int i=0;i<xi;i++)
#define inp_t int t; cin>>t
#define min_max(a,b) auto result=minmax({a,b})


int main(){

string chck[29]={"0","10","11","12","13","14","15","16","17","9","8","7","1","2","3","4","5","6","ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};

inp_t;

int k_const=0;


if(t<1 or t>100){
	return -1;
}
else{
	for_p(i,t){
		string val;
		cin>>val;
		if(val.size()>100 or val.size()<1){
			return -1;
		}
		for_p(a,29){
			if(val==chck[a]) k_const+=1;
			else NULL;
		}
		
		
	}
	
	cout<<k_const;
}






return 0;
}
