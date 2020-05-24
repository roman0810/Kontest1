#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;

    int a[n];
    int b[n];

    for (int i = 0; i<n; i++)
        std::cin >> a[i];
    for (int i = 0; i<n; i++)
        std::cin >> b[i];

    unsigned int i0{0}, j0{0};
    unsigned int max_a{0};

    for (unsigned int i = 1; i < n; ++i)
    {
        if (a[max_a] < a[i])
            max_a = i;

        if (a[i0] + b[j0] < a[max_a] + b[i] and i >= max_a)
        {
            j0 = i;
            i0 = max_a;
        }
    }

    std::cout << i0 << " " << j0;
    return 0;
}
