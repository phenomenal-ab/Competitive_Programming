#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> st(s.begin(), s.end());
    if (st.size() % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
}
