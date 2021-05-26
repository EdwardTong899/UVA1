#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    bool up;
   
    while(a--)
    {
    	cin>>b>>c;
    	
    	for(int k=0;k<c;k++)
    	{
    		up=1;
    		int count=0;
    		for(int i=1;i<b*2;i++)
    		{
    			if(count<b&&up==1)
    			{
    				count++;
    			
    			}
    			else up=0;
    			if(up==0)count--;
    			for(int j=0;j<count;j++)
    			{
    				cout<<count;
    			}

    			cout<<endl;
    	
    		}
    		
    		
    		
    		if(a==0&&k==c-1)break;
    	cout<<endl;
    	}
    
    
    }
   
    return 0;
}


