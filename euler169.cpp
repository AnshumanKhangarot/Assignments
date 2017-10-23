#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned long long func(unsigned long long n)
{
if(n==0)
return 1;
if(n%2==0)
	return func(n/2)+func(n-1);
return func(n/2);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  unsigned long long t,res;
	cin >> t;
	res=func(t);
	cout << res << "\n";
  return 0;
}
