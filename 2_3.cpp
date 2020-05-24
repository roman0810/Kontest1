#include <iostream>
#include <vector>


int main()
{
    int n;
    int s{0};
    std::cin >> n;
    std::vector<int> A(n);

    for(int i{0} ; i<n ; ++i)
    {
        int a;
        std::cin >> a;
        A[i] = a;
    }

    std::cin >> n;
    std::vector<int> B(n);
    for(int i{0} ; i<n ; ++i)
    {
        int b;
        std::cin >> b;
        B[i] = b;
    }

    int k;
    std::cin >> k;
    int i0{0};



    for(int j = B.size()-1 ; j>-1 and i0 < A.size() ; --j)
        for(int i{i0} ; i < A.size() and A[i]+B[j]<=k ; ++i)
        {
            i0 = i;
            if(A[i]+B[j] == k)

                ++s;
        }


    std::cout << s;

}
