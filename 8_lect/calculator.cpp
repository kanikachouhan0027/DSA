#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    char operat;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    cout<<"enter operator"<<endl;
    cin>>operat;
    
    int res;
    switch(operat){
        case '+':
                    res=a+b;
                   cout<<a <<operat<< b <<" = "<<res;
                  break;
        case '-':
                //if (a>b){
                     res=a-b;
                     cout<<a <<operat<<b <<" = "<<res;
               // }
               // else{
                     //res=b-a;
                //}
                  break;
        case '*':
                  res=a*b;
                  cout<<a <<operat<< b <<" = "<<res;
                  break;
    
        case '%': 
                 res=a%b;
                 cout<< a <<operat<< b <<" = "<<res;
                 break;

        case '/': 
                if(b==0){
                    cout<<"divisor can't be zero"<<endl;
                }
                else{
                    res=a/b;
                    cout<<a <<operat<< b <<" = "<<res;
                }
                  break;
          default :        cout<<"enter valid operator"<<endl;
    }

    
}