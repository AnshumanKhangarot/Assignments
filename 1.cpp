#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int q;
	cin >> q;
	map<string,int> m;
	map<string,int>:: iterator it;
	while(q--)
	{
		int y;
		string s;
		int x;
		cin >> y;
		cin >> s;
		cin >> x;
		if(y==1)
			m.insert(pair<string,int>(s,x));
		else if(y==2)
			m.erase(s);
		else if(y==3)
		{
			it=m.find(s);
			if(it==m.end())
				cout << "0\n";
			else
				cout << it->second << "\n";             
		}
		for(it=m.begin();it!=m.end();it++)
			            cout << it->first << it->second << "\n";
	}
	return 0;
}
