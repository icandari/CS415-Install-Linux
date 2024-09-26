#include <string>
#include <iostream>

using namespace std;

class Animal {
    public:
        Animal(string name, string owner);
        void printInfo();
        ~Animal();

    private:
        string name;
        string owner;
};



