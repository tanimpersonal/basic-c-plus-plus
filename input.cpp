#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    //take input
    cin>>a>>b;
    cout<<a<<" "<<b << endl;
    char n[100];
    //but cin can not take space
    //so we can take space with .. cin.getline();
    // but getline wont work if another line is printed before, because a new line is in the iostream already. so need to give cin.ignore() to work.
    cin.ignore();
    cin.getline(n,100);
    cout << n << endl;
    int x[5];
    for(int i=0; i<5; i++){
        cin>>x[i];
    }
    for(int i=0 ; i<5; i++){
        cout<<x[i];
    }
    return 0;
}
