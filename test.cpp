
#include <iostream>
#include <stdio.h>

using namespace std;

int nextNum(int n){
    return n+1;
}

long long int findFieve(int n){
    if(n == 0) return 0;
    long long int first = 0;
    long long int second = 1;
    long long int temp = 0;
    for(int i=2; i<=n; i++){
        temp = second;
        second = first + second;
        first = temp;
    }
    return second;
}

int main() {
    int n,t;
    cin >> t;
    while(t--){
        cin >> n;
        printf("n = %llu\n", findFieve(n));
        
    }

    return 0;
}

