#include<iostream>
#include<string>

using namespace std;

void subseq_ascii(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseq_ascii(ros, ans);
    subseq_ascii(ros, ans+ch);
    subseq_ascii(ros, ans+to_string(code));

}

int main()
{
    string s = "ABC";
    subseq_ascii(s, "");

    return 0;
}