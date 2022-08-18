//#include<iostream>
//iomanip is used for that setprecision.
//#include<iomanip>
//if we want to get all the header files at once then we have
#include<bits/stdc++.h>
using namespace std;
int main(){
    float a= 10.565654;
    //only give 4 digits by default
    //precision applies how much digit
    cout <<fixed<<setprecision(2)<<a<<endl;
    char b= 'A';
    cout << b;
}
