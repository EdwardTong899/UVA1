#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int x=0;
    while(T--){
    	
    	if(x!=0){
    		cout<<endl;
    	}
    	x++;
    	
    	int D;
    	cin>>D;
    	string Mtemp;
    	int Ltemp,Htemp;
    	vector<string>M;
    	vector<int>L;
    	vector<int>H;
    	while(D--){
    		cin>>Mtemp>>Ltemp>>Htemp;
    		M.push_back(Mtemp);
    		L.push_back(Ltemp);
    		H.push_back(Htemp);
    	}
    	int Q;
    	cin>>Q;
    	int out;
    	int index;
    	for(int i=0;i<Q;i++){
    		int P;
    		cin>>P;
    		index=0;
    		
    		for(int j=0;j<M.size();j++){
    			if(P>=L[j]&&P<=H[j]){
    				index++;
    				out=j;
    			}
    		
    		}
    		if(index!=1)cout<<"UNDETERMINED"<<endl;
    		else cout<<M[out]<<endl;
    	
    	}
		
    		
    	

    	
    }
    return 0;
}


 
