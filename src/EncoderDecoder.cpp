#include "../include/EncoderDecoder.h"
#include <string>
#include <iostream>
#inclde <vector>

EncoderDecoder::EncoderDecoder(){
    for (int i =1 ;i<opcodes.size() ; i++){
        char[1] op = {(char)i};
        opcodes[i] = op;
    }
    zero = '\0';
}

char[] EncoderDecoder::encode(string input) {
    using namespace std;
    if(input.substr(0 , 8) == "REGISTER"){
        return EncoderDecoder::encodeRegister(input);
    }

char[] EncoderDecoder::encodeRegister(string input){
    int indexStart = 9;
    int curr = 9;
    while(input[curr] == ' '){
        curr++;
    }
    string username = input.substr(indexStart , curr - indexStart);
    indexStart = curr + 1;
    curr++;
    while(input[curr] == ' '){
        curr++;
    }
    string password = input.substr(indexStart , curr - indexStart);
    indexStart = curr + 1;
    curr++;
    while(input[curr] == '\n'){
        curr++;
    }
    string birthday = input.substr(indexStart , curr - indexStart);

char[] username = toArray(username);
char[] password = toArray(password);
char[] birthday = toArray(birthday);

vector<char[]> vec;
vec.add(opcodes[1]); vec.add(username);
vec.add(zero); vec.add(password);
ec.add(zero); ec.add(birthday); ec.add(zero);
return mergeArrays(vec);

}

char[] EncoderDecoder::mergeArrays(Vector<byte[]> vec){
        int size = 0;
        for (byte[] arr : vec){
            size += arr.length;
        }
        byte[] output = new byte[size];
        int index = 0;
        for(int i=0 ; i < vec.size() ; i++){
            byte[] currArr = vec.elementAt(i);
            for (int j=0 ; j< currArr.length ; j++){
                output[index] = currArr[j];
                index++;
            }
        }
        return output;
    }
char[] EncoderDecoder::toArray(string input){
        char[input.size()] output;
        for(int i=0 ; i<output.length ; i++){
            output[i] = input[i];
        }
        return output;
    }
}

