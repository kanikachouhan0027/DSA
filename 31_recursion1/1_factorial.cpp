#include<iostream>
using namespace std;
int factorial(int n)
{
   if(n==0){
    return 1;
   } 
   int smallerpb=factorial(n-1);
   int biggerpb=n*smallerpb;
   return biggerpb;
}
    
