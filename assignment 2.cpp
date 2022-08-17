#include <bits/stdc++.h>
using namespace std;
class s{
    string name;
    string id;
    public:
    void init(string x,string y){
        name=x;
        id=y;
    }
    s() {}
    s(s &t){
        name=t.name;
        id=t.id;
    }
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Id :"<<id<<endl;
    }
};
int main() {
    s obj1;
    obj1.init("Alfaz Mahmud Rizve","C221004");
    obj1.display();
    s obj2(obj1);
    obj2.display();
    return 0;
}
