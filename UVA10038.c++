#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,c;
    while(cin>>a)
    {
    	vector<int>b;
    	for(int i=0;i<a;i++)
    	{
    		cin>>c;
    		b.push_back(c);
    	}
    	
    	set<int>d;
    	for(int i=0;i<a-1;i++)
    	{
    		d.insert(abs(b[i]-b[i+1]));
    		
    	}
    	if(a==2&&(b[0]==b[1]))cout<<"Not jolly"<<endl;
    	else if(d.size()==a-1)cout<<"Jolly"<<endl;
    	else cout<<"Not jolly"<<endl;
			
    
    }
    return 0;
}

