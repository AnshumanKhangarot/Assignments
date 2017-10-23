#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int k,b,m;
	cin >> k >> b >> m;
	long long res=0;
	//cout << int(s[0]) << endl;
		long long int l;
		long long sum=0;
		l=1;
		for(int j=s.length()-1;j>s.length()-k-1;j--)
		{
			//cout << "andar \n";
			sum=sum+(l*(int(s[j])-48));
//			cout << j << s[j] << "sum= " << sum <<"l="<< l<< endl;
			l=(l*b);
		}
		l=l/b;
		res=res+(sum%m);
//		cout << "res=" << res << endl;
	for(int i=s.length()-1-k;i>=0;i--)
	{
		sum=sum-((int(s[i+k])-48));
		sum=sum/b;
//		cout << "sum=" << sum << endl;
		sum=sum+l*(int(s[i])-48);
//		cout << "sum=" << sum <<"l=" <<l <<endl;
		res=res+(sum%m);
//		cout << "res=" << res << endl;
	}
	cout << res << endl;
	return 0;
}
