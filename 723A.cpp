#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[3];
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	sort(a,a+3);
	int ans=(a[0]+a[2])/2;
	int m=abs(a[0]-ans)+abs(a[1]-ans)+abs(a[2]-ans);
	cout<<m<<endl;
	return 0;
}