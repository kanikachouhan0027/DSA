#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int sum=0;
    int i=1;
    while (i<=n)
    {
        if (i%2==0){
            i=i+1; 
            sum=sum+i;  
        }
        else{
          i=i+1;
            continue;
        }
        //i=i+1; yahan is inc ko dono if and else block ke andar dena hoga becoz continue ke baad koi bhi statement us particular value of counter variable i.e i ke liye run  nahi krti
       
    }
    cout<<sum<<endl; }
   /* int n;
    cin>>n;
    int i=2;
    while (i<=n-1){
     if (n%i==0){
            cout<<"not prime "<<endl;
            break;
        } isme ye pb hai ki agr break uise kr rahe to bbhi ye overall loop se hat raha and agr prime hai to bhi loop se hat raha to ham not prime to likh denge pr agr prime likhna hai to ye nahi aayega isse isiliye e cheez ham lec 5 mai dekhenge  
        i=i+1;
    }

  */
