#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

int main(){
    string s = "()[]{}";

    int length = s.length();

    if(length % 2 == 1) {
        return false;
    }

    stack<char> st;

    for(int i=0;i<length;i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }
        else if((s[i] == ')' || s[i] == ']' || s[i] == '}') && st.empty()){
            return false;
        }
        else if((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '[')){
            st.pop();
        }
        else {
            return false;
        }

    }
    return st.empty() ? true : false;

}