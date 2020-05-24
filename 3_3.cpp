#include <iostream>




int main()
{
    int m , n;
    std::cin >> n >> m;

    int a[n];
    int b[m];

    for(int i{0} ; i<n ; ++i)
        std::cin >> a[i];

    for(int i{0} ; i<m ; ++i)
        std::cin >> b[i];


    for(int i{0} ; i<m ; ++i)
    {
        int start = 0 , end = n;
        while(start <= end)
        {
            int k = (start + end)/2;

            if(a[k] == b[i])
                std::cout << b[i] <<" ";
            if(a[k] < b[i])
                start = k+1;
            else
                end = k-1;

        }

    }
    return 0;
}
