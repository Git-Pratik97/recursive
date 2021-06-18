#include<iostream>

using namespace std;

string move_allx(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];

    string ans = move_allx(s.substr(1));
    if (ch == 'x')
    {
        return ans+ch;  
    }
    else
    {
        return ch+ans;
    }
}

int main()
{
    string s = "asxaxxasdaxxasaxxsad";
    cout <<move_allx(s) <<endl;

    return 0;
}