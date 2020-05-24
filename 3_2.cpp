#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for(int i{0} ; i<n ; ++i)
        std::cin >> arr[i];

    int k = 0;

    for(int jump = n / 2; jump >= 1; jump /= 2)
        while (k + jump < n and arr[k + jump] > arr[k + jump - 1])
            k += jump;
    std::cout << k;
}
