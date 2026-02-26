#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stringstream ss(s);
        string word;

        vector<string> v;

        while (ss >> word)
        {
            v.push_back(word);
        }
        reverse(v.begin(), v.end());
        string reversed = "";

        for_each(v.begin(), v.end(), [&reversed](string s)
                 {
            if (!reversed.empty()) {
                reversed += ' ';
            }
            reversed += s; });
        return reversed;
    }
};

int main()
{
    Solution solution;

    string s1 = solution.reverseWords("the sky is blue");
    cout << s1 << endl;

    string s2 = solution.reverseWords("  hello world  ");
    cout << s2 << endl;

    string s3 = solution.reverseWords("a good   example");
    cout << s3 << endl;
}