#include <iostream>
using namespace std;

double my_pow(double a, unsigned int n){
    for(int i=0; i<n;i++){
        a*=a;
    }

}

int mine(){
     setlocale(LC_ALL, "rus");

    double a;
    int n;

    cout<<"введи число и степень\n";
    cin>> a>>n;
    my_pow(a, n);
}
