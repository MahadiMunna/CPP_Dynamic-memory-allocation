#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    //using ternary operator
    x%2==0?cout<<"Even"<<endl:cout<<"Odd"<<endl;

    return 0;
}

//ternary operator is called shortcut if/else.