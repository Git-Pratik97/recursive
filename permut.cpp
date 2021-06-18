#include<iostream>

using namespace std;

void permuatations(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans <<endl;
        return;
    }
   
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i)+s.substr(i+1);

        permuatations(ros, ans+ch);

    }
}

int main()
{
    permuatations("ABC", "");

    return 0;
    
}