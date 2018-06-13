#include <iostream>
#include <ctime>
using namespace std;
int main()
{
int x;
int y;
cin>>x>>y;
int **arr= new int *[x];
    srand(time(NULL));
    for( int i = 0; i < x; i++ ) {
        arr[i]=new int[y];
    }
    for( int i = 0; i < x; i++ ){
        for( int j = 0; j < y; j++ ) {
        arr[i][j] = rand()%100;
        }
    }

    for( int i = 0; i < x; i++ ) {
        cout<<endl;
        for( int j = 0; j < y; j++ )
        cout<<arr[i][j]<<"  ";
    }
}

