#include <iostream>

using namespace std;

int main()
{
    //Declare variables
    int x = 18;
    int y = 30;
    int z;

    //Input the age
    cout<< "Enter your age\n";
    cin>> z;

    //Decision making
    if (z<x){
    cout<<"You are too young\n";
    }
    else if(z>x && z<y){
    cout<<"You are an adult\n";

    }
    else {
    cout<<"You are too old\n";
    }

    cout << "Thank You" << endl;
    return 0;
}
