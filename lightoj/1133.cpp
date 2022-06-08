#include<iostream>
#include<stdio.h>
#include<algorithm>

#define sd(x) scanf("%d",&x);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)
#define For(i,n) for(int i = 0 ; i < n ; i++)


using namespace std;


int main(){
    int t,d,k,y,z;
    int m,n;
    char c;
    sd(t);
    ForC(cs,t){
        scanf("%d %d",&n, &m);
        int arr[100];

        For(i,n){
            sd(arr[i]);
        }

        For(i,m){
            cin >> c;
            if(c == 'S'){
                sd(d);
                For(j,n){
                    arr[j]+=d;
                }
            }
            else if(c == 'M'){
                sd(d);
                For(j,n){
                    arr[j]*=d;
                }
            }
            else if(c == 'D'){
                sd(k);
                For(j,n){
                    arr[j]/=k;
                }
            }
            else if(c == 'P'){
                scanf("%d %d", &y,&z);
                int temp = arr[z];
                arr[z] = arr[y];
                arr[y] = temp;
            }
            else {
                reverse(arr, arr+n);
            }
        }
        printf("Case %d:\n", cs);
        For(j,n){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    return 0;

}