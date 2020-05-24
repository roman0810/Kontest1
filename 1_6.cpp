#include <iostream>
int main()
{
    int s;
    std::cin >> s;
    int a[s];

    for(int i{0} ; i<s ; i++)
    {
        int k;
        std::cin >> k;
        a[i]=k;
    }
    for(int i{0} ; i<s/2 ; i++)
    {
        int loc = a[i];
        a[i] = a[s-i-1];
        a[s-i-1] = loc;
    }
    for(int i{0} ; i<s ; i++)
    {
        std::cout << a[i] << " ";
    }

}
