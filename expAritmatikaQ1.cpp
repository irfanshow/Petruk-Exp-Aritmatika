#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IsOperator(char c){
    if(c == '+'){
        return true;
    }
    else if(c =='-'){
        return true;
    }
    else if(c =='/'){
        return true;
    }
    else if(c =='*'){
        return true;
    }
    else{
        return false;
    }

}


int main(){
    string input,postFix;
     
   
    getline(cin,input);

    for(int i=0;i<input.length();i++){
        if(isdigit(input[i])){
            postFix = postFix + input[i];

            if(!(isdigit(input[i+1]))){
                postFix = postFix + " ";
            }

        }else if(!(isdigit(input[i])) && input[i]!=  ' '){
            postFix =postFix+ input[i];
            postFix = postFix+ " ";
        }

    }

    
    cout << "Print : " << postFix;
    return 0;
}
