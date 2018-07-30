#include <iostream>
#include <string>

using namespace std;
struct type{
void*adress;};

int main()
{
    int a=7;
    float b=3.14;
    string c="barev";
    type arr[3];
    arr[0].adress=&a;
    arr[1].adress=&b;
    arr[2].adress=&c;
    int*intptr=static_cast<int*>(arr[0].adress);
    float*floatptr=static_cast<float*>(arr[1].adress);
    string*stringptr=static_cast<string*>(arr[2].adress);
    cout<<*intptr<<endl;
    cout<<*floatptr<<endl;
    cout<<*stringptr<<endl;


}
