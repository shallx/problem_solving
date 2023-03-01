#include <iostream>
#include <stdio.h>
#include <map>
#include <string.h>

using namespace std;

int main(){
    map<char,int> map;
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 100;
    map['M'] = 1000;

    string s = "III";
    int length = s.size() - 1;
    for(int i=0; i< length; i++){
        if(i+1 < length){
            if(map[i] == 'I'){}
        }
    }
    return 0;
}