#include <iostream>
using namespace std;

int main() {
    float a=0,b=0;
    cin>>a;
    cin>>b;
    int opzione=0;
    cin>>opzione;
    switch (opzione) {
        case 0:cout<<int((a*b)/2);
            break;
        case 1:cout<<int(a*a);
            break;
        case 2:cout<<int(a*b);
            break;
    default:
        cout<<"stringa non valida";
    }
   
   return 0;
}
