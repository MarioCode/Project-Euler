#include <iostream>
#include <string>

bool is_palindrome(std::string s)
{
    if (equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
        return true;
    else
        false;
}

int main()
{
    int large_pal = 0;
    int a = 999;
    while(a >= 100)
    {
        int b = a;
        while(b >= 100)
        {
            int tmp = a*b;
            if (is_palindrome(std::to_string(tmp)) && tmp > large_pal)
                large_pal = tmp;
            b--;
        }
        a--;
    }
    std::cout << large_pal << std::endl;
    return 0;
}
