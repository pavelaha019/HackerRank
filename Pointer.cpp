#include<iostream>
using namespace std;
void add(int a,int b){
    int z;
      z=a+b;
}
void sub(int a,int b){
    int z1=a-b;
}
int main(){
    int x,y,z,z1;
    cin>>x>>y;
    z=add(x,y);
    z1=sub(x,y);
    cout<<z<<z1<<endl;
    return 0;
}