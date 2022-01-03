#ifndef SPL_ASSIGNEMNT_3_CLIENT_ENCODERDECODER_H
#define SPL_ASSIGNEMNT_3_CLIENT_ENCODERDECODER_H
#include <string>
#include <vector>
#include <iostream>


using namespace std;
class EncoderDecoder{
public:
    EncoderDecoder();
    vector<char> encode(string input);
    string decode(string input);

private:
    vector<char> encodeRegister(string input);
    vector<char> mergeVectors(vector<vector<char>> vec);
    vector<char> toVector(string input);
    char opcodes[13];
//    vector<char> opcodesvec;



};


#endif //SPL_ASSIGNEMNT_3_CLIENT_ENCODERDECODER_H
