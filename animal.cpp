#include "animal.h"
#include <iostream>
#include <string>


Animal::Animal(string name, string owner){
    Animal::name = name;
    Animal::owner = owner;

}


void Animal::printInfo(){
    cout << "Name: " << name << endl;
    cout << "Owner: " << owner << endl;
}

Animal::~Animal(){
    cout << "Animal " << name << " just died" << endl;
}