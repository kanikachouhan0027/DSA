#include <iostream>
using namespace std;
int main()
{
    /*int n;
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<sum;*/
    /* float F;
    cin>>F;
    float C=(5.0/9)*(F-32);//imp not--if sirf 5?9 likha to ye since int ?int =int hence 0 le lega value
    cout<<"in celcius ="<<C<<endl;*/

    int n;
    cin >> n;
    int i = 2;
    
  
        while (i <= n - 1){

            if (n % i == 0)
            {
                cout << "not a prime number";
                break;
                
            }
         i++;
    }
    if (i==n){
        cout<<"a prime number";
    }
}
