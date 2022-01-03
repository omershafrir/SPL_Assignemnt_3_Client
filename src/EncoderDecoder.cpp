#include "../include/EncoderDecoder.h"
#include <string>
#include <iostream>
#include <vector>

EncoderDecoder::EncoderDecoder(){
    for (int i =0 ; i < 13 ; i++){
        this->opcodes[i]=(char)i;
//        opcodesvec.push_back(i);
        cout<<this->opcodes[i];    ///////////////////////////////////
    }
    cout<<"opcode?: "<<opcodes[3];    ///////////////////////////////////
}

vector<char> EncoderDecoder::encode(string input) {
    using namespace std;
    if(input.substr(0 , 8) == "REGISTER"){
        return encodeRegister(input);
    }
}

vector<char> EncoderDecoder::encodeRegister(string input){

    int indexStart = 9;
    int curr = 9;
    while(input[curr] != ' '){
        curr++;
    }
    string _username = input.substr(indexStart , curr - indexStart);
    indexStart = curr + 1;
    curr++;
    while(input[curr] != ' '){
        curr++;
    }
    string _password = input.substr(indexStart , curr - indexStart);
    indexStart = curr + 1;
//    curr++;
    while(input[curr] =! '\n'){
        curr++;
    }
    string _birthday = input.substr(indexStart , curr - indexStart);

vector<char> username = toVector(_username);
vector<char> password = toVector(_password);
vector<char> birthday = toVector(_birthday);

vector<vector<char>> vec;
    cout<<input<<endl;//////////////////////////////
    cout<<_username<<"-"<<_password<<"-"<<_birthday<<endl;   /////////////////////////////////

//vec.push_back(opcodesvec.at(1)); vec.push_back(username);
//vec.push_back(opcodesvec.at(0)); vec.push_back(password);
//vec.push_back(opcodesvec.at(0)); vec.push_back(birthday); vec.push_back(opcodesvec.at(0));

return mergeVectors(vec);

}




vector<char> EncoderDecoder::mergeVectors(vector<vector<char>> vec){
        int size = 0;
        for (vector<char> thisVector : vec){
            size += thisVector.size();
        }
        vector<char> output;
        int index = 0;
        for(vector<char> thisVector : vec){
            for (char byte : thisVector){
                output.push_back(byte);
            }
        }
        return output;
    }

vector<char> EncoderDecoder::toVector(string input){
        vector<char> output;
        for(int i=0 ; i<input.size() ; i++){
            output.push_back(input[i]);
        }
        return output;
    }


