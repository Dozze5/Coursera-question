#include<iostream>
#include<stack>
#include<cstring>
#include<algorithm>


using namespace std;

int main(void){
    string text;
  bool flag = false;

  int pos =0;
    getline(cin,text);
    stack<char> Bracket;

    for(int i = 0; i < text.length(); i++){
        char br = text[i];


                        if(br == '(' || br == '{' || br == '['){
                            Bracket.push(br);
                        }


                        if (br == ')' || br == ']' || br == '}'){
                            if(Bracket.top() == '(' && br == ')'){
                                    flag = true;    
                                    Bracket.pop();     
                            }
                            else if(Bracket.top() == '{' && br == '}'){
                                flag = true; 
                                Bracket.pop();  
                            }
                            else if(Bracket.top() == '[' && br == ']'){
                                flag = true; 
                                Bracket.pop();  
                            }

                            else{
                                flag = false;
                            }
                        }
    
                        else if(!Bracket.empty()){
                            pos = i+2;
                            flag = false;
                        }

    }

    if(flag){
        cout<<"Succes"<<endl;
    }
    else{
        cout<<pos;
    }
    return 0;
}
