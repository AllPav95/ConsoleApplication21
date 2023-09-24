#include "Atom.h"
#include <iostream>

Atom::Atom(const std::string& symbol, int atomicNumber, int neutrons, int nucleusCharge)
    : symbol(symbol), atomicNumber(atomicNumber), neutrons(neutrons), nucleusCharge(nucleusCharge) {}

const std::string& Atom::getSymbol() const {
    return symbol;
}

int Atom::getAtomicNumber() const {
    return atomicNumber;
}

int Atom::getNeutrons() const {
    return neutrons;
}

int Atom::getNucleusCharge() const {
    return nucleusCharge;
}

void Atom::printInfo() const {
    std::cout << "Symbol: " << symbol << std::endl;
    std::cout << "Atomic Number: " << atomicNumber << std::endl;
    std::cout << "Neutrons: " << neutrons << std::endl;
    std::cout << "Nucleus Charge: " << nucleusCharge << std::endl;    
}