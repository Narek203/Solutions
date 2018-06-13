#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int num;
cin>>num;
int ret = sqrt(num);
    if(num<1)
        cout<<"prime number have to be positive";
    else
        for ( int i = 2, j = (sqrt(num)+1); i <= (j+1); i++ ) {


            if(num%i == 0) {
                cout<<num<<" number isn't prime "<<num<<" is divided into "<<i;
                return 0;
            }
            if (i == j){
                cout<<num<<" is prime!";
                return 0;
            }
        }
}
