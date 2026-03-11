#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st ;
        bool ret= true;
        for(char ch:s){
            if (ch == '(' || ch == '{' || ch == '[' || ch == '<'){
                st.push(ch);
            }
            else {
                if(st.empty()){
                    ret = false;
                }
                else if( (ch == ')' && st.top() == '(') ||
                    (ch == '}' && st.top() == '{') ||
                    (ch == ']' && st.top() == '[') ||
                    (ch == '>' && st.top() == '<')){
                        st.pop();
                }
                else{
                    ret = false;
                }
            }
            
        }

        if(!st.empty()){
            ret = false;
        }
        
        return ret;
    }
};


int main(){
    Solution s;
    string str = "({[]})";
    cout << s.isValid(str) << endl;
    return 0;
}