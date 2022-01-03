
#include "../include/Client.h"
#include "../include/EncoderDecoder.h"
#include "../include/connectionHandler.h"
#include <boost/version.hpp>
#include <iostream>



using namespace std;
int main(int argc, char** argv) {
EncoderDecoder encdec;
string x = encdec.encode("REGISTER OMER 123 3.10");
//cout<<x;

char const *c = x.c_str();
for (int i=0 ; i<15 ; i++){
    cout<<c[i]<<" , ";
}
ConnectionHandler ch("omer" , 22);
//ch.sendLine(x);
}