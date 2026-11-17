#include <stdio.h>
#include <sstream>
#include <strstream>
#include <iostream>

//#Alternative 1 -> snprintf

//big difference is that it limits how many bytes are written to prevent buffer overflow
//sprintf just blindly writes past the end of the buffer 



//#Alternative 2 -> std::stringstream
//has a internal buffer that is resizable,  size and type safe
//very ineffienct as it supports dynamic memory allocation


//#Alternative 3 -> std::strstream



int main (){
    char printff[10];
    char nprintf[10];
    const char* str = "Hello";

    sprintf(printff,"%s",str);

    //provides an upperbound on writing
    snprintf(printff,sizeof(nprintf),"%s",str);


    //modern, uses dynamic memory allocation
    std::stringstream ss;
    ss << "Hello World" << '\n';
    std::string formatted = ss.str();

    //depreciaated and uses manual memory management
    std::strstream strs;





}