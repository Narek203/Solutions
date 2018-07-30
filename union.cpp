#include <iostream>
#include <string>
using namespace std;

union type
{
    char name[20];
    int age;
    float height;
};

int main()
{
type person[3];
cin.getline(person[0].name,20);
cin>>person[1].age;
cin>>person[2].height;
for(int i=0;i<3;++i)
{
if(i==0){
cout<<person[0].name<<endl;
}
else if(i==1)
{
cout<<person[1].age<<endl;
}
else if(i==2){
cout<<person[2].height<<endl;
}
}

}
