#include<bits/stdc++.h>
using namespace std;

class largest {
private:
   int a, b, c;
public:
   void enter() {
       cout << "Enter three numbers :"<<endl;
       cin >> a >> b >> c;
   }
   friend void get(largest l);
};

void get(largest l) {
   if (l.a > l.b && l.a > l.c) {
       cout << "The biggest number is :" << l.a <<endl;
   }
   else if (l.b > l.c) {
       cout << "The biggest number is :" << l.b <<endl;
   }
   else{
       cout << "The biggest number is :" << l.c <<endl;
   }
}

int main() {
   largest l;
   l.enter();
   get(l);
   return 0;
}

