#include "../include/EncoderDecoder.h"
#include <string>
#include <iostream>
#include <vector>

EncoderDecoder::EncoderDecoder(){
  opcode.push_back("\0");
  opcode.push_back("01");
  opcode.push_back("02");
  opcode.push_back("03");
  opcode.push_back("04");
  opcode.push_back("05");
  opcode.push_back("06");
  opcode.push_back("07");
  opcode.push_back("08");
  opcode.push_back("09");
  opcode.push_back("10");
  opcode.push_back("11");
  opcode.push_back("12");
  nullzero = string(1,'\0');
  coma = string(1,';');
}

string EncoderDecoder::encode(string input) {
    using namespace std;
    if (input.substr(0, 8) == "REGISTER") {
        return encodeRegister(input + ";");
    }
    if (input.substr(0, 5) == "LOGIN") {
        return encodeLogin(input + ";");
    }
    if (input.substr(0, 6) == "LOGOUT") {
        return encodeLogout(input + ";");
    }
    if (input.substr(0, 6) == "FOLLOW") {
        return encodeFollow(input + ";");
    }
    if (input.substr(0, 4) == "POST") {
        return encodePost(input + ";");
    }
    if (input.substr(0, 2) == "PM") {
        return encodePM(input + ";");
    }
    if (input.substr(0, 7) == "LOGSTAT") {
        return encodeLogstat(input + ";");
    }
    if (input.substr(0, 4) == "STAT") {
        return encodeStat(input + ";");
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
    string birthday = input.substr(indexStart , curr - indexStart);
    string output = opcode[1]+username+nullzero+password+nullzero+birthday+nullzero+coma;

return output;
}

string EncoderDecoder::encodeLogin(string input){
    int indexStart = 6;
    int curr = 6;
    while(input[curr] != ' '){
        curr++;
    }
    string username = input.substr(indexStart , curr - indexStart);
    indexStart = curr + 1;
    curr++;
    while(input[curr] != ';'){
        curr++;
    }
    string password = input.substr(indexStart , curr - indexStart);

    string captcha(1 , '1');
    string output = opcode[2]+username+nullzero+password+nullzero+captcha+coma;
    return output;
}

string EncoderDecoder::encodeLogout(string input){
    return opcode[3]+coma;
}

string EncoderDecoder::encodeFollow(string input){
    return "";
}

string EncoderDecoder::encodePost(string input){
    return "";
}

string EncoderDecoder::encodePM(string input){
    return "";
}

string EncoderDecoder::encodeLogstat(string input){
    return "";
}

string EncoderDecoder::encodeStat(string input){
    return "";
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


