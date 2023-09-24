#include "Molecule.h"
#include <iostream>

Molecule::Molecule(const std::string& name) : name(name) {}

void Molecule::addAtom(const Atom& atom) {
    atoms.push_back(atom);
}

void Molecule::printInfo() const {
    std::cout << "Molecule: " << name << std::endl;
    std::cout << "Atoms in the molecule:" << std::endl;

    for (const Atom& atom : atoms) {
        std::cout << "Symbol: " << atom.getSymbol() << std::endl;
        std::cout << "Atomic Number: " << atom.getAtomicNumber() << std::endl;
        std::cout << "Neutrons: " << atom.getNeutrons() << std::endl;
        std::cout << "----------------------" << std::endl;
    }
}