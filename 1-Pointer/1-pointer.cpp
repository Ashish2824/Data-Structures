#include <iostream>
using namespace std;

int main(){

    int i;
    cout<<&i<<endl;

    int*p = &i;
    cout<<p<<endl;
    cout<<&p<<endl;

    float f = 10.5;
    float *pf = &f;
    cout<<"Address of float(d) = "<<pf<<endl;

    double d = 142.54;
    double *pd = &d;
    cout<<"Address of double(d) = "<<pd<<endl;
}