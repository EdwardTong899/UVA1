#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,c,d;
    
    double b=M_PI;
    while(cin>>a)
    {
    	if(a==0)break;

			b=a*10.0/9.0;
			d=a/9.0;
			
			c=b;
			if(a%9==0)
			{
				
				cout<<c-1<<" "<<c;
	
				
			}
			else
			{
				cout<<c;
			}
    	
    
    	cout<<endl;
    
    }
    return 0;
}
