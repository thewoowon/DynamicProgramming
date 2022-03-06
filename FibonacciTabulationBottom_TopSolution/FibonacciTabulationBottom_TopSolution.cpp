#include <iostream>
#include <vector>

using namespace std;

int Fibo(int n)
{
    vector<int> DP(n + 1, 0);
    DP[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        DP[i] = DP[i - 1] + DP[i - 2];
    }

    return DP[n];
}


int main()
{

}

