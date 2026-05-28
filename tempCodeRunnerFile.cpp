#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cout << "enter a binary number :";
    cin >> a;
    int conv=0;
    int sum=0;
    int count=0;
    while(a>0){
        int last_digit=a%10;
        sum = sum + last_digit*(pow(2,count));
        a/=10;
        count++;
    }
    cout << sum ;
    return 0;
}