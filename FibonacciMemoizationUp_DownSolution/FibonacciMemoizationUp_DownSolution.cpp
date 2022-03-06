#include <iostream>
#include <vector>

using namespace std;

const int UNKNOWN = -1;
const int MAX_SIZE = 100;

vector<int> memo(MAX_SIZE, UNKNOWN);

int Fibo(int n)
{
	if (n < 2)
		return n;

	if (memo[n] != UNKNOWN)
		return memo[n];

	int result = Fibo(n - 1) + Fibo(n - 2);
	memo[n] = result;
	return result;
}

int main()
{
	
}

