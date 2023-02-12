#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin>>a;
	cin>>b;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	int m=a.compare(b);
	cout<<m<<endl;
	return 0;
}