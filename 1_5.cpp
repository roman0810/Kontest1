#include <iostream>
int main()
{
    int g;
    std::cin >> g;
    int a = 1;
    std::cout << 1 << " ";
    for(int i{1} ; i<g ; ++i)
    {
        a=a+i+i+1;
        std::cout << a << " ";
    }

    return 0;
}
