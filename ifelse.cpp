#include<iostream>
using namespace std;

int main() {
    int a;
    cin>>a; 
    if (a>0)
    {
       cout<< "a is positive" <<a <<endl;
    }
    else if  (a<0)
    {
        cout<< "a is negative" <<a <<endl;
    }
    else  {
        cout << "a is zero" << endl;
    }
    
    return 0;
}