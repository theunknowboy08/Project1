#ifndef HANGMAN
#define HANGMAN
#include<string>

using namespace std;

class Hangman {

private:


public:
void PrintMessage(std::string message, bool printTop, bool printBottom);




};

void Hangman::PrintMessage(std::string message, bool printTop = true, bool printBottom = true){
if(printTop){
    cout<<"+---------------------------------+"<<endl;
    cout<<"|";
}
else{
    cout<<"|";
}
bool front = true;
char cnt = 'a';
for(int i = message.length(); i<33; i++){// Centering the message
    
    if(front){
       // cout<<i;
        
        message = cnt + message;
        cnt++;
    }
    else{ 
        
        message = message +cnt;
    }
  front =!front;
}
//cout<<"\n";
cout<<message<<"    "<<sizeof(message)<<" |"<<endl;//.c_str();






}

Hangman H;

#endif //HANGMAN