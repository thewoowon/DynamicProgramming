#include <iostream>

int Fibo(int n)
{
    if (n < 2)
        return n;

    return Fibo(n - 1) + Fibo(n - 2);
}


int main()
{
    std::cout << "Hello World!\n";
}

