#include <iostream>

using namespace std;

int gcd(int a,int b){
	
if(a==0)

return b;

return gcd(b%a,a);

}
	
int main(){
	

int a=12, b=30;

	cout<<"gcd("<<a<<","<<b<<")="<<gcd(a,b)<<endl;
	
	a= 210,  b=45;
	
	cout<<"gcd("<<a<<","<<b<<")="<<gcd(a,b)<<endl;
	
	return 0;
		
}
