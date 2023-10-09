#include "Molecule.h"
#include <iostream>

Molecule::Molecule()
    : name("") {}

Molecule::Molecule(const std::string& name) : name(name) {}

#pragma region GettersAndSetters

const std::string& Molecule::getName() const {
    return name;
}

void Molecule::setName(const std::string& name) {
    this->name = name;
}

#pragma endregion


Molecule Molecule::operator+(const Molecule& other) const {
    Molecule result(name + other.name);
    result.atoms = atoms;
    result.atoms.insert(result.atoms.end(), other.atoms.begin(), other.atoms.end());

    return result;
}

void Molecule::addAtom(const Atom& atom) {
    atoms.push_back(atom);
}

void Molecule::printInfo() const {
    std::cout << "Molecule: " << name << std::endl;
    std::cout << "Atoms in the molecule:" << std::endl;

    for (const Atom& atom : atoms) {
        std::cout << atom;
        std::cout << "----------------------" << std::endl;
    }
}