#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    string getName(){
        return this->name;
    }
    void Setname(string name){
        this->name=name;
    }
};
int main(){
    Student first;
    first.Setname("ramesh");
     cout<<first.getName();

}