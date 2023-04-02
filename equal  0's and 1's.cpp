#include <bits/stdc++.h>
using namespace std;

string stringLen(string str)
{
    map<int, int> m;
    m[0] = -1;

    int count_0 = 0, count_1 = 0;
    int start, end, res = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '0')
            count_0++;
        else
            count_1++;
        if (m.find(count_1 - count_0) != m.end()) {

            if ((i - m[count_1 - count_0]) > res) {

                start = m.find(
                             count_1 - count_0)
                            ->second;
                end = i;
                res = end - start;
            }
        }
        else
            m[count_1 - count_0] = i;
    }

    if (count_0 == 0 || count_1 == 0)
        return "-1";
    return str.substr(start + 1, end + 1);
}

int main()
{
    string str;
    cin>>str;
    cout << stringLen(str);
    return 0;
}
