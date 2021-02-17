#include <bits/stdc++.h>
#define ll long long

using namespace std;

//1� - MDC(a, b, c) --> MDC(MDC(a, b), c)
//2� MDC(a, 0) --> a
//3� MDC(a, b) ---> MDC(b, a % b)


int MDC(int a, int b)
{
	if(b == 0) return a;

	return MDC(b, a % b);
}


int main(int argc, char const *argv[])
{
	int N, x;

	cin >> N;

	int mdc = 0;

	for(int i = 1; i <= N; i++)
	{
		cin >> x;

		mdc = MDC(mdc, x);
	}

	cout << mdc << endl;


	return 0;
}
