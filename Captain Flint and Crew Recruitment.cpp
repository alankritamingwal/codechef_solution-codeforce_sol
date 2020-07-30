#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if (n<=30){
			cout<<"NO"<<endl;
		}
		else{
			int y=n-30;
			if (y==10 || y==6 || y==14){
				if (n>31){
					cout<<"YES"<<endl;
					cout<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
			else{
				cout<<"YES"<<endl;
				cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
			}
			
		}
	}
}
