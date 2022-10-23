#include<iostream>

int main(int argc, char const *argv[])
{
    char name[255] = "Shiam Sharif\0";
    int i = 0;
    
    for(i = 0; name[i] != '\0'; i++) {}
    std::cout << "String len: " << i << "\n"; 

    return 0;
}
