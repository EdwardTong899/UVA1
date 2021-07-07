#include<bits/stdc++.h>
using namespace std;
string int_to_string(long long int dif){
	string s="";
	while(dif){
		int a=dif%10;
		dif=dif/10;
		s+=a+'0';
	
	}
	return s;
}

int main(){
    string s;
    while(cin>>s,s!="0"){
    	cout<<"Original number was "<<s<<endl;
    	long long int dif=99999999999;
    	int chain=0;
    	set<long int>libery;
    	while(1){
    		
    		chain++;
    		sort(s.begin(),s.end());
    		long long int b=stoi(s);
    		reverse(s.begin(),s.end());
    		long long int a=stoi(s);
    		cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    		int count1=libery.size();
    		libery.insert(a-b);
    		int count2=libery.size();
    		if(count1==count2){
    			cout<<"Chain length "<<chain<<endl<<endl;
    			break;
    		}
    		if(a-b==0){
    			cout<<"0 - 0 = 0"<<endl;
    			chain++;
    			cout<<"Chain length "<<chain<<endl<<endl;
    			break;
    		}
    		dif=a-b;
    		s=int_to_string(dif);
    	
    	}
    	
    	
    
    }
    return 0;
}


