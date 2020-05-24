#include <iostream>

int evkl(int a , int b)
{
    while(a != b)
    {
        if (a < b)
            b-=a;
        else
            a-=b;
    }
    return a;
}


int main()
{
    int a,b,c,d;

    std::cin >> a >> b >> c >> d;
    int znam = b*d;
    int chisl = a*d + b*c;

    int delit = evkl(znam , chisl);
    std::cout << chisl/delit << " " << znam/delit;

    return 0;
}
