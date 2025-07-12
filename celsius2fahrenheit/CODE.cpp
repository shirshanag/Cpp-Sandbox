#include <iostream>
using namespace std;
int main(){
    cout<<"Temperature Converter!!\n";
    float t;
    cout<<"Enter the temperature in celcius:";
    cin>>t;
    cout<<"Converting to Fahrenhit...\n";
    float f=(t * 9/5) + 32;
    cout<<"Temperature at fahrenheit:"<<f<<"*f";
}
