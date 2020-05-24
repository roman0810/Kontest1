#include <iostream>

int schet (int n, int k)
{
    int res = 0;
    for (int i{1} ; i < n+1 ; ++i)
        res = (res + k) % i;

    return res + 1;
}

int main()
{
    int n,k;
    std::cin >> n >> k;

    std::cout << schet(n , k) << std::endl;
    return 0;
}
