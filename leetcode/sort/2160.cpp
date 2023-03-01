#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int minimumSum(int num);
int* numToDigits(int num);

int main(){
    int num = 2932;
    
    cout << minimumSum(num) << endl;
    return 0;
}

int minimumSum(int num) {
    int *arr = numToDigits(num);
    // cout << arr[0] << arr[1] << arr[2] << arr[3] << endl;
    sort(arr, arr + 4);
    int n1 = arr[0]*10 + arr[2];
    int n2 = arr[1]*10 + arr[3];
    return n1 + n2;
        
}

int* numToDigits(int num){
    static int arr[4];
    int i = 3;
    while(i != -1){
        arr[i--] = num % 10;
        num /= 10;
    }
    return arr;
}