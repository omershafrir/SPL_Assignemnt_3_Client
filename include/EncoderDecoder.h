#ifndef SPL_ASSIGNEMNT_3_CLIENT_ENCODERDECODER_H
#define SPL_ASSIGNEMNT_3_CLIENT_ENCODERDECODER_H
#include <string>
#include <iostream>
#include <boost/asio.hpp>

class EncoderDecoder{
public:
    char[] encode(string input);
    string decode(string input);

private:
    char[] encodeRegister(string input);
    char[] mergeArrays(Vector<byte[]> vec);
    char[] toArray(string input);
    const char[13][1] opcodes;
    const char zero;



};


#endif //SPL_ASSIGNEMNT_3_CLIENT_ENCODERDECODER_H
