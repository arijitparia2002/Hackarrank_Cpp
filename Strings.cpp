#include <iostream>
#include <string>
using namespace std;

int main() {
    string l1, l2;
    getline(cin,l1);
    getline(cin,l2);
    cout<<l1.size()<<" "<<l2.size()<<endl;
    cout<<l1<<l2<<endl;
    char temp = l2[0];
    l2[0] = l1[0];
    l1[0]=temp;
    cout<<l1<<" "<<l2<<endl;
}
