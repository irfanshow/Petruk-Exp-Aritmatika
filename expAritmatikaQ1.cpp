#include <iostream>
#include <string>

using namespace std;


int main()
{
    string  infix ;
   cin>>infix;
    cout <<"Print : ";
    for(int i = 0 ; i <= infix.size();i++)
    {
        cout<<infix[i]<<" ";
    }

}
