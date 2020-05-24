#include <iostream>

int zero_fac(int a)
{
    int res{0};
    if (a<5)
        return res;
    else
    {
        for (int i{5} ; i<=a ; i++)
        {
            int k = i;
            while (k % 5 == 0)
            {
                res+=1;
                k/=5;
            }
        }
        return res;
    }
}


int main()
{
    int g;
    std::cin >> g;
    std::cout << zero_fac(g);
    return 0;
}
