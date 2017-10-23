#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */  
	int q;
	cin >> q;
	while(q--)
	{
		set<long long int > s;
		set<long long int >::iterator it;
		long long x;
		int y;
		cin >> y >> x;
		if(y==1)
			s.insert(x);
		else if (y==2)
		{
			it=s.find(x);
			if(it==s.end())
			{}
			else
				s.erase(x);
		}
		else if(y==3)
		{
			it=s.find(x);
			cout << *it;
			if(it==s.end())
				printf("No\n");
			else
				printf("Yes\n");
		}
		for(it=s.begin();it!=s.end();it++)
		{
			printf("%lld\n",*it);
		}
	}
	return 0;
}

