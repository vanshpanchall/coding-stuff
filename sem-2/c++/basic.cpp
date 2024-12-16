#include <iostream>
#include <conio.h>
using namespace std;
class triangle
{
    int height, base;

public:
    void readData()
    {
        cout << "Enter Height :";
        cin >> height;
        cout << "Enter Base :";
        cin >> base;
    }
    void printResult(); // Function Prototype

} t;

// Function define
void triangle::printResult()
{
    float ans = (0.5) * height * base;
    cout << "Area of triangle :" << ans;
}

int main()
{
    // clrscr();
    t.readData();
    t.printResult();
    /*int height, base;

    clrscr();
    //ans may come in fractions
    cout<<"Enter height and base : ";
    cin>>height>>base;

    float ans= (0.5)*height*base;    //area of triangle formula

    cout<<"Area of triangle is : "<<ans;
    */
    return 0;
}
