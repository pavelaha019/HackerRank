#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int a;
    long long int l;
    char ch;
    float f;
    long double d;
    
    cin>>a;
    cin>>l;
    cin>>ch;
    cin>>f;
    cin>>d;

    
   cout<< setprecision(20) << a <<endl<< l << endl << ch << endl << f << endl << d;
    
    return 0;
}
