#include<bits/stdc++.h>
using namespace std;
class student
{
 string name;
 string id;
public:
 student(string n,string i)
 {
  name=n;
  id=i;
 }
 void show()
 {
  cout<<"Name :"<<name<<endl;
  cout<<"ID :"<<id<<endl;
 }
};
int main()
{
 student nameid("Alfaz Mahmud Rizve","C221004");
 nameid.show();
}

