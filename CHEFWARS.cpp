#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int h,p;
	while(t--){
		cin>>h>>p;
		while(p!=0){
			h=h-p;
			p=p/2;
		}
		if(h>p){
			cout<<0<<endl;
		}
		else{
			cout<<1<<endl;
		}
	}
}
