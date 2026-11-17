#include <stdio.h>

int main() {
//sprintf (string print formatted)
//sprintf saves formatted text and instead of placing in a stdout, saves to char[] in memory

//other alternatives is std::stringstream std::strstream

    char buffer[50];
    int age = 25;

    //Easy to use, not length safe, not type safe, not usable in templates
    sprintf(buffer,"User is %d years old", 25);

}