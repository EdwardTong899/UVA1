#include<bits/stdc++.h>
using namespace std;
bool primetable[10001];//prime=0

prime(){
	primetable[1]=primetable[2]=0;
	for(int i=2;i<=pow(10000,0.5);i++)
	{
		for(int j=i*2;j<=10000;j+=i)
		{
			primetable[j]=1;
			
		}
	}


}
int main(){
    prime();
    int a,b,mid,left,right;
    while(cin>>a>>b)
    {
    	int count=0;
    	for(int i=1;i<=a;i++)
    	{
    		if(primetable[i]==0)count++;
    	
    	}
    	
    	
 
    	if(count%2==0)
    	{
    		left=count/2-b+1;
    		right=count/2+b;
    	
    	}
    	
    	else
    	{
    		left=count/2+1-b+1;
    		right=count/2+b;
    	
    	}
    	
    	
    	count=0;
    	cout<<a<<" "<<b<<":";
    	for(int i=1;i<=a;i++)
    	{
    		if(primetable[i]==0)count++;
    		if(count>=left&&count<=right&&primetable[i]==0)
    		{
    			cout<<" "<<i;
    		}
    		
    		
    	
    	}
    	cout<<endl<<endl;;
    }
    
    return 0;
}


