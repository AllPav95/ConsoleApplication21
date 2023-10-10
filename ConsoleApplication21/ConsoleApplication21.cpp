#include <iostream>
#include "Atom.h"
#include "Molecule.h"

int main() {

    Atom hydrogen("H", 1, 0);
    Atom oxygen("O", 8, 8);
    Atom carbon("C", 6, 6);
    Atom potassium("K", 19, 19, 4);

    Molecule water("Water");
    water.addAtom(hydrogen);
    water.addAtom(hydrogen);
    water.addAtom(oxygen);

    Molecule glucose("Glucose");
    for (int i = 0; i < 6; i++) {
        glucose.addAtom(carbon);
    }
    for (int i = 0; i < 12; i++) {
        glucose.addAtom(hydrogen);
    }
    for (int i = 0; i < 6; i++) {
        glucose.addAtom(oxygen);
    }

    Molecule potassiumMolecule("Potassium");
    potassiumMolecule.addAtom(potassium);

    std::cout << "Info about Water:" << std::endl;
    water.printInfo();
    std::cout << std::endl;

    std::cout << "Info about Glucose:" << std::endl;
    glucose.printInfo();
    std::cout << std::endl;

    std::cout << "Info about Potassium:" << std::endl;
    potassium.printInfo();   
    std::cout << std::endl;

    Molecule combined = water + glucose;

    combined.printInfo();

    if (water == glucose) {
        std::cout << "Water is equal to Glucose." << std::endl;
    }
    else {
        std::cout << "Water is not equal to Glucose." << std::endl;
    }

    if (combined != water) {
        std::cout << "Combined is not equal to Water." << std::endl;
    }
    else {
        std::cout << "Combined is equal to Water." << std::endl;
    }

    return 0;
}