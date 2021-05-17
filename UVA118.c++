#include<bits/stdc++.h>
using namespace std;
int main(){
    int limit_X,limit_Y;
    cin>>limit_X>>limit_Y;
    char direction[4]={'N','E','S','W'};
    int x,y;
    char dir;
    int map[52][52]={0};
    
    for(int i=0;i<limit_X+3;i++)
    {
    	
    	map[i][limit_Y+2]=1;
    	map[i][0]=1;
    
    }
    
    for(int i=0;i<limit_Y+3;i++)
    {
    	
    	map[0][i]=1;
    	map[limit_X+2][i]=1;
    }
    
    
    
    /*for(int i=0;i<52;i++)
    {
    	for(int j=0;j<52;j++)
    	{
    		cout<<map[i][j];
    	}
    	cout<<endl;
    }
    */

    string s;
    while(cin>>x>>y>>dir)
    {
    	getline(cin,s);
    	getline(cin,s);
    	bool lost=0;
    	int direct;
    	for(int i=0;i<4;i++)
    	{
    		if(dir==direction[i])direct=i;
    	
    	}
    	
    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i]=='R')
    		{
    			direct++;
    			if(direct>3)direct=0;
    		}
    	
    		if(s[i]=='L')
    		{
    			direct--;
    			if(direct<0)direct=3;
    		}
    		
    		if(s[i]=='F')
    		{
    			if(direct==0)
    			{
    				if(map[x+1][y+2]==1)
    				{
    					map[x+1][y+2]=2;
    					lost=true;
    					break;
    				
    				}
    				else if(map[x+1][y+2]==2)continue;
    				else y++;
    			
    			}
    			
    			if(direct==1)
    			{
    				if(map[x+1+1][y+1]==1)
    				{
    					map[x+1+1][y+1]=2;
    					lost=true;
    					break;
    				
    				}
    				else if(map[x+1+1][y+1]==2)continue;
    				else x++;
    			
    			}
    			
    			if(direct==2)
    			{
    				if(map[x+1][y+1-1]==1)
    				{
    					map[x+1][y+1-1]=2;
    					lost=true;
    					break;
    				
    				}
    				else if(map[x+1][y+1-1]==2)continue;
    				else y--;
    			
    			}
    			
    			if(direct==3)
    			{
    				if(map[x+1-1][y+1]==1)
    				{
    					map[x+1-1][y+1]=2;
    					lost=true;
    					break;
    				
    				}
    				else if(map[x+1-1][y+1]==2)continue;
    				else x--;
    			
    			}
    			
    			
  
    		
    		}
    	
    	
    	}
    	
    	cout<<x<<" "<<y<<" "<<direction[direct];
    	if(lost)cout<<" LOST";
    	cout<<endl;
    	
    	
    	
    }
    

    
    
    return 0;
}
