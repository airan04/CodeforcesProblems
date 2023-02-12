#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,n,w;
	cin>>k>>n>>w;
	int m=(w*(w+1))/2;
	int ans=(m*k)-n;
	if(ans>0){
	cout<<ans<<endl;
	return 0;
    }else{
    	cout<<"0"<<endl;
    	return 0;
    }
}