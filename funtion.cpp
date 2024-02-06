#include <iostream>
#include <cstdio>
using namespace std;
int fun(int a,int b,int c,int d){
    int max;
    if (a>b && a>c && a>d)
    {
       max=a;
    }
    else if(b>a && b>c && b>d){
        max=b;      
    }
    else if (c>a && c>b && c>d)
    {
       max=c;
    }
    else{
        max=d;
    }
    return max;
 
    }

int main(){
    int n1,n2,n3,n4;
    int larget;
    cin>>n1>>n2>>n3>>n4;
    larget=fun(n1,n2,n3,n4);
    cout<<larget<<endl;
 return 0;
}