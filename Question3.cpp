#include<iostream>
using namespace std;
int ceiil(float a);
int flooor(float a);
int main(){
    float a;
    int s,d;
    cout<<"Enter a number\n";
    cin>>a;
    s=ceiil(a);
    d=flooor(a);
    cout<<"The ceilinf value is "<<s<<endl;
    cout<<"The floor value is "<<d<<endl;
    return 0;
}
int ceiil(float a){
    if(a>0){
        a=(int)a+1;
        return a;
    }else if(a<0){
        a=(int)a;
        return a;
    }
}
int flooor(float a){
    if(a>0){
        a=(int)a;
        return a;
    }else if(a<0){
        a=(int)a-1;
        return a;
    }
}