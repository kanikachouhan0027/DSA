#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter amount";
    cin>>n;
    switch(1){
        case 1 : {
        int hundred=n/100;
            cout<<"total number of hundred rupees notes are "<<hundred<<endl;
    }
        case 2:{
           int next=n%100;
           int fifty=next/50;
           cout<<" total fifty notes are "<<fifty<<endl;}
        case 3:{
            int next=n%100;
           int twenty=(next%50)/20;
           cout<<"twenty notes are "<<twenty<<endl;
        }
        case 4:{
            int next=n%100;
        int one=(next%50)%20;
        cout<<"total one ruppe notes are "<<one<<endl ;}
         

}
}