#include <iostream>
#include <string>
#include "animal.h"

using namespace std;



int main() {
   Animal cow("Fred", "Farmer Joe");
   Animal *dog = new Animal("Snaps", "Mary");
   cow.printInfo();
   delete dog;
};
