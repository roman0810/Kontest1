#include <iostream>

void summ (int k , int a)
{
    int del1 = a/k;

    if (k==a)
        std::cout << 1 << " " << a-1;
    else
        std::cout << del1 << " " << del1*(k-1) << std::endl;
    return;
}

int main()
{
    int a , k{2};
    std::cin >> a;

    while(a % k !=0)
        k+=1;

    summ(k , a);

    return 0;
}
