#include <iostream>

using namespace std;

class stack{

    private:
    int*_arr;
    int _size;
    int _top;
    public:
    void push(const int val);
    int pop();
    stack(const int sz = 100);
    ~stack();
            };
stack::stack(const int sz){
    
    this->_size = sz;
    this->_arr = new int[this->_size];
    this->_top = -1;
            }

void stack::push(const int val){
   
    if(this->_top == this->_size){
        int *tmp;
        tmp = new int [2*_size];
        for (int i = 0; i <= this->_size; i++){
        tmp[i] = this->_arr[i];}
    delete [] _arr;
    this->_arr = tmp;
    this->_size = 2*this->_size;
            }
    this->_arr[++this->_top] = val;
            }

int stack::pop(){
        
    if(this->_top == -1){
        cout<<"error";
        return 0;}
    return (this->_arr[this->_top--]);
            }

stack::~stack(){

    delete[]_arr;
    _arr = NULL;
        }


int main()
{
    stack obj;
    obj.push(15);
    cout<<obj.pop();
    cout<<endl;
    cout<<obj.pop();
}
