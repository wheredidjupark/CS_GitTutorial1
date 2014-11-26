#include <iostream>
#include <string>
//We will use the following program to demonstrate how Git's branching, cloning, merging, and pulling functionality.

using namespace std;

//<<<<<<< HEAD
void index();
//=======
void contact();
//>>>>>>> 9c975156cdff09e0a040334caece43ca2902f357

int main()
{

cout << "hello world!\0";
    
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for(int i =0; i < 10; i++)
    {
        cout <<arr[i]*arr[i] << " ";
    }

return 0;
}

//<<<<<<< HEAD
void index()
{
    cout <<"this is index"
//=======
//the following is implemented in r2_contact
void contact()
{
    cout << "My name is Ju Park." <<endl <<"Here is my pseudo-contact information: \0 P:310-111-1111";
//>>>>>>> 9c975156cdff09e0a040334caece43ca2902f357
}
