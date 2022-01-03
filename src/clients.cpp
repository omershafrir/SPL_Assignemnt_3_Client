
#include "../include/Client.h"
#include "../include/EncoderDecoder.h"
#include <boost/version.hpp>
#include <iostream>



using namespace std;
int main(int argc, char** argv) {
EncoderDecoder encdec;
vector<char> x = encdec.encode("REGISTER OMER 123 3.10\n");
for (char c: x){
    cout<<c<<" , ";
}
}