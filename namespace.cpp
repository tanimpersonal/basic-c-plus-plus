//namespace is kinda a group
#include <bits/stdc++.h>
using namespace std;
namespace one {
    int x= 90;
    void fun(){
        cout<< "It is namespace 1"<< endl;
    }
}
namespace two{
    int x=20;
    void fun(){
        cout<< "It is namespace 2"<< endl;
    }
}

using namespace two;
int main(){
    cout << one::x<<endl;
    cout << two::x<<endl;
    fun();
}
