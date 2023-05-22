#include <bits/stdc++.h>
using namespace std;

int main(){
    int *a = new int;//syntax to creat space in heap memory
    *a=10;
    cout<<*a<<endl;
    float *f = new float;
    *f = 2.56;
    cout<<*f<<endl;
    delete f;
    cout<<*f<<endl;
    return 0;
}