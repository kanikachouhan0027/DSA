#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x1;
    float x2;

    float coff_x2;
    cout<<"enter coefficient of x^2"<<endl;
    cin>>coff_x2;
    float coff_x;
    cout<<"enter coefficient of x"<<endl;
    cin>>coff_x;
    float cons;
    cout<<"enter constant"<<endl;
    cin>>cons;
    float D=(coff_x*coff_x)-(4*coff_x2*cons);
    if(D==0){
        x1=(-coff_x)/(2*coff_x2);
        cout<<"roots are real and same: "<<x1<<endl;

    }
    else if(D>0){
        x1=((-coff_x)+(sqrt(D)))/(2*coff_x2);
        x2=((-coff_x)-(sqrt(D)))/(2*coff_x2);
        cout<<"roots are real and distinct: "<<x1<<" "<<x2<<endl;

    }
    else{
        cout<<"non real roots";
    }


    
}