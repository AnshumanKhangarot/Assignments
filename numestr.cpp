#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int k,b,m;
	cin >> k >> b >> m;
	long long res=0;
	//cout << int(s[0]) << endl;
	for(int i=s.length()-1;i>=0;i--)
	{
		long long int l;
		l=1;
		long long sum=0;
		if(i-k>=-1){
		for(int j=i;j>i-k;j--)
		{
			//cout << "andar \n";
			sum=(sum+(l*(int(s[j])-48))%m)%m;
//			cout << j << s[j] << "sum= " << sum << endl;
			l=(l*b)%m;
		}}
		res=res+sum;
//		cout << "res=" << res << endl;
	}
	cout << res << endl;
	return 0;
}
