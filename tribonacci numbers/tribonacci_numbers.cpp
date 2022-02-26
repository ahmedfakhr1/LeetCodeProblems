#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long tribonacci(int n)
{

long long arr[81];
arr[0] = 0;
arr[1] = 1;
arr[2] = 1;
if (n)
for (int i = 3;i<=n;i++){
    arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }
return arr[n];


}

int main() {
    int n;
  	cin>>n;
  	cout<<tribonacci(n);
    return 0;
}
