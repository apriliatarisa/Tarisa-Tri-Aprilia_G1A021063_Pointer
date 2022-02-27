#include <iostream>
#include <string>
using namespace std;

int main() {
 int a,b,c;
 int *P1,*P2,*P3;
 a=10; cout<<a<<"\n";
 b=15; cout<<b<<"\n";
 c=27; cout<<c<<"\n";
 P1=&a; cout<<P1<<"\n";
 P2=&b; cout<<&b<<"\n";
 P1=&c; cout<<P1<<"\n";
 a=*P2; cout<<a<<"\n";
 b=6; cout<<b<<"\n";
 P3=&b; cout<<P3<<"\n";
 P3=&c; cout<<P3<<"\n";
 *P1=*P3; cout<<*P3<<"\n";
}
