#include <iostream>
#include <vector>  
#include <string>

using namespace std;

int main() {

    string input; 
    getline(cin,input);

    vector<char> postFix;
    
    for( int unsigned i=0; i<input.length(); i++)
    {
        if(input[i] == ' ')
        {
            continue;
        }
        
        else if(isdigit(input[i]))
        { 
            while(i<input.length() && isdigit(input[i]))
            {
                postFix.push_back(input[i]);
                i++;
            }
            i--;
        }
        else if(input[i] == '-')
        {
            postFix.push_back(input[i]);
            if(i==0){
                if(isdigit(input[i+1]))
                {
                    i++;
                    while(i<input.length() && isdigit(input[i])){
                        postFix.push_back(input[i]);
                        i++;
                    }
                    i--;
                } else {
                    postFix.push_back('1');
                    postFix.push_back(' ');
                    postFix.push_back('*');
                }
            } else 
            {
                if(!isdigit(input[i-1]) && input[i+1] != ' ')
                {
                    postFix.push_back('1');
                    postFix.push_back(' ');
                    postFix.push_back('*');
                } 
            }
        } else
            postFix.push_back(input[i]);
        postFix.push_back(' ');
    }
   
    cout <<"Print : ";

    for(auto v:postFix)
        cout << v;
    return 0;
}
