#include <iostream>
int main()
{
    int g;
    std::cin >> g;
    int i{2};
    while(g!=1)
        if(g%i == 0)
        {
            std::cout << i << " ";
            g/=i;
        }
        else i++;
    return 0;
}
