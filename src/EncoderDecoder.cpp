#include "../include/EncoderDecoder.h"
#include <string>
#include <iostream>
#include <vector>

EncoderDecoder::EncoderDecoder(){
  opcode.push_back("\0");
  opcode.push_back("1");
  opcode.push_back("2");
  opcode.push_back("3");
  opcode.push_back("4");
  opcode.push_back("5");
  opcode.push_back("6");
  opcode.push_back("7");
  opcode.push_back("8");
  opcode.push_back("9");
  opcode.push_back("10");
  opcode.push_back("11");
  opcode.push_back("12");
}

string EncoderDecoder::encode(string input) {
    using namespace std;
    if(input.substr(0 , 8) == "REGISTER"){
        return encodeRegister(input+";");
    }
}

string EncoderDecoder::encodeRegister(string input){
    int indexStart = 9;
    int curr = 9;
    while(input[curr] != ' '){
        curr++;
    }
    string username = input.substr(indexStart , curr - indexStart);
    indexStart = curr + 1;
    curr++;
    while(input[curr] != ' '){
        curr++;
    }
    string password = input.substr(indexStart , curr - indexStart);
    indexStart = curr + 1;
    curr++;
    while(input[curr] != ';'){
        curr++;
    }
    string birthday = input.substr(indexStart , curr - indexStart-1);
    string one = string(1,'1'); string zero = string(1,'0');
    string nullzero = string(1,'\0'); string end = string(1,';');
    string output = zero+one+username+nullzero+password+nullzero+birthday+nullzero;

return output;
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


