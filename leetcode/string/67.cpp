#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stack>

using namespace std;

class Solution {
    
public:
    stack<int>stringToStack(string s, int l){
        stack<int> stack;
        for(int i = 0; i<=l; i++){
            stack.push(s[i] - 48);
        }
        return stack;

    }
    string addBinary(string a, string b) {
        int al = a.size()-1;
        int bl = b.size()-1;

        string s;
        stack<int> sA = stringToStack(a, al);
        stack<int> sB = stringToStack(b, bl);


        int carry = 0;
        while(!(sA.empty() && sB.empty())){
            int sum = carry;
            if(!sA.empty()) {
                sum+= sA.top();
                sA.pop();
            }
            if(!sB.empty()) {
                sum+= sB.top();
                sB.pop();
            }

            switch (sum)
            {
            case 0:
                s+='0';
                break;
            case 1:
                s+='1';
                carry = 0;
                break;
            case 2:
                s+='0';
                carry = 1;
                break;
            
            default:
                //case = 3
                s+='1';
                carry = 1;
                break;
            }
        }
        if(carry == 1)
        s+= '1';

        reverse(s.begin(), s.end());
        return s;
    }
};

int main(){
    
    Solution sol = Solution();
    cout << sol.addBinary("1010", "1011") << endl;

    return 0;
}