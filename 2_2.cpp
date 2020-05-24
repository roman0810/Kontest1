#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    double up_summ{0};

    int y_prew;
    int x_prew;
    int x;
    int y;

    std::cin >> x_prew >> y_prew;
    int x0 = x_prew;
    int y0 = y_prew;

    for(int i{0} ; i<n-1 ; ++i)
    {
        std::cin >> x >> y;

        if (x_prew > x)
           up_summ -= 0.5*abs(x - x_prew)*abs(y_prew + y);
        else
           up_summ += 0.5*abs(x - x_prew)*abs(y_prew + y);

        x_prew = x;
        y_prew = y;
    }

    x = x0;
    y = y0;
    if (x_prew > x)
       up_summ -= 0.5*abs(x - x_prew)*abs(y_prew + y);
    else
       up_summ += 0.5*abs(x - x_prew)*abs(y_prew + y);

    std::cout << up_summ;
}
