#include<iostream>
using namespace std;
class Hero{
private:
int health;
char level;
public:

int gethealth(){
    return health;
}
void sethealth(int health){
    this->health=health;
}
Hero(){
   cout <<"constructor called"<<endl;
}

};
int main(){
    Hero Avatar;
}