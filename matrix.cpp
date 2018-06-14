#include <iostream>


int main()
{
int x;
int y;
std::cin>>x>>y;
if(x<0)
x=(x*(-1));
if(y<0)
y=(y*(-1));
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
        std::cout<<std::endl;
        for( int j = 0; j < y; j++ )
        std::cout<<arr[i][j]<<"  ";
    }

    for ( int i = 0; i < x; i++ ) {
        delete [] arr[i];
    }

delete [] arr;

}
