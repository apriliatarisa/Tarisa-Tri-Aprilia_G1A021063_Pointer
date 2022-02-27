#include <iostream>
#include <string>
using namespace std;

int main() {
 int a,b,c;
 int *P1,*P2,*P3;
 a=10;
 cout<<a<<"\n";
 b=15;
 cout<<b<<"\n";
 P1=&b;
 cout<<P1<<"\n";
 P2=P1;
 cout<<P2<<"\n";
 c=27;
 cout<<c<<"\n";
 P1=&c;
 cout<<P1<<"\n";
 a=*P1;
 cout<<a<<"\n";
 P3=&b;
 cout<<P3<<"\n";
 *P2=8;
 cout<<*P2<<"\n";
}
