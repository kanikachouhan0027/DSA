#include<iostream>
#include<stack>
using namespace std;

int main()
{
  stack<char> s;
  string str="lovebabbar";
  for(int i=0;i<str.length();i++)
  {
     s.push(str[i]);
  }
 string ans="";
 for(int i=0;i<str.length();i++)
 {
    ans.push_back(s.top());
    s.pop();
 }
 cout<<ans;

}