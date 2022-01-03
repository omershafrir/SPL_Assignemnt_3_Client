#ifndef SPL_ASSIGNEMNT_3_CLIENT_ENCODERDECODER_H
#define SPL_ASSIGNEMNT_3_CLIENT_ENCODERDECODER_H
#include <string>
#include <vector>
#include <iostream>


using namespace std;
class EncoderDecoder{
public:
    EncoderDecoder();
    string encode(string input);
    string decode(string input);

private:
    string encodeRegister(string input);
    vector<char> mergeVectors(vector<vector<char>> vec);
    vector<char> toVector(string input);
    vector<string> opcode;



};


#endif //SPL_ASSIGNEMNT_3_CLIENT_ENCODERDECODER_H
