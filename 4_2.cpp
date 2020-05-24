#include <iostream>
#include <vector>


class Deck
{
private:
    std::vector<int> buffer {0 , 0};
    bool is_back{false};
    bool is_front{false};
    int fb = -1 , ff = -1 , lb = -1 , lf = -1;
    size_t size = 0;
    void check_size(int index);

public:
    int pop_front();
    void push_back(int a);

    int pop_back();
    void push_front(int a);
};

int Deck::pop_front()
{
    if(size == 0) return -1;
    if(!is_front)
    {
        int n = buffer[fb];
        if(fb == lb)
            is_back = false;
        else
            fb += 2;

        size--;
        return n;
    }

    int n = buffer[lf];
    if(lf == ff)
        is_front = false;
    else
      lf -= 2;
    size--;
    return n;
}


void Deck::push_back(int a)
{
    if(!(size != 0 and is_back))
    {
        fb = 0 , lb = 0;
        buffer[fb] = a;
        is_back = true;
    }
    else
    {
        check_size(lb);
        lb += 2;
        buffer[lb] = a;
    }
    size++;
}


void Deck::push_front(int a)
{
    if(!(size != 0 and is_front))
    {
        ff = 1 , lf = 1;
        buffer[ff] = a;
        is_front = true;
    }
    else
    {
        check_size(lf);
        lf += 2;
        buffer[lf] = a;
    }
    size++;
}


int Deck::pop_back()
{
    if(size == 0) return -1;
    if (!is_back)
    {
        int n = buffer[ff];
        if (ff == lf)
            is_front = false;
        else
            ff += 2;
        size--;
        return n;
    }
    int n = buffer[lb];
    if (lb == fb)
        is_back = false;
    else
        lb -= 2;
    size--;
    return n;
}


void Deck::check_size(int index)
{
    if(buffer.size() <= index+2)
    {
        buffer.push_back(0);
        buffer.push_back(0);
    }
}


int main()
{
    bool chek{true};
    int a;
    std::cin >> a;
    Deck stak;

    for(int i{0} ; i<a ; ++i)
    {
        int cur;
        int com;
        std::cin >> com >> cur;
        if(com == 1)
            stak.push_front(cur);
        if(com == 2 and cur != stak.pop_front())
            chek = false;
        if(com == 3)
            stak.push_back(cur);
        if(com == 4 and cur != stak.pop_back())
            chek = false;
    }
    if(chek)
        std::cout << "YES";
    else
        std::cout << "NO";



    return 0;
}



