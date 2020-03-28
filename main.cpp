#include <iostream>


//Programma yavlyaetsya uchebnoy

double sum(double a, double b) {
    return a+b;
}

int main()
{
    using namespace std;
    cout<<"Enter first number "<<endl;
    int a;
    cin>>a;
    cout<<"Enter second number "<<endl;
    int b;
    cin>>b;
    cout<<"Enter third number "<<endl;
    int c;
    cin>>c;
    cout<<"Sum "<<a+b+c<<endl;
    cout<<"Multiply "<<a*b*c<<endl;
    cout<<"Dif "<<a-b-c<<endl;
    return 0;

}
