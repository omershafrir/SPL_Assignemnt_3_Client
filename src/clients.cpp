
#include "../include/Client.h"
#include "../include/EncoderDecoder.h"
#include "../include/connectionHandler.h"
#include <boost/version.hpp>
#include <iostream>



using namespace std;
int main(int argc, char** argv) {
EncoderDecoder encdec;
string reg = encdec.encode("REGISTER OMER 123 3.11");
string login = encdec.encode("LOGIN OMER 123");
string logout = encdec.encode("LOGOUT");

cout<<logout<<endl;
//
char const *c = logout.c_str();
for (int i=0 ; i<18 ; i++){
    cout<<c[i]<<" , ";
}
//ConnectionHandler ch("omer" , 22);
//ch.sendLine(x);
}