#include<iostream>
using namespace std;
class Human{
public:
int height;
int weight;

int getHeight(){
    return this->height;
}
void setweight(int weight){
    this->weight=weight;
}};
class Male:public Human{
public:
string color;
}; 

int main(){
    Male object1;
   int h= object1.height;
   cout<<h; 
}







