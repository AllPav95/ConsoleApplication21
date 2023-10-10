#include "Atom.h"
#include <iostream>

Atom::Atom(const std::string& symbol, int atomicNumber, int neutrons, int nucleusCharge)
    : symbol(symbol), atomicNumber(atomicNumber), neutrons(neutrons), nucleusCharge(nucleusCharge) {}

bool Atom::operator==(const Atom& other) const {
    return (symbol == other.symbol &&
        atomicNumber == other.atomicNumber &&
        neutrons == other.neutrons &&
        nucleusCharge == other.nucleusCharge);
}

bool Atom::operator!=(const Atom& other) const {
    return !(*this == other);
}


Atom Atom::operator+(const Atom& other) const {
    return Atom(symbol + other.symbol, atomicNumber + other.atomicNumber, neutrons + other.neutrons, nucleusCharge + other.nucleusCharge);
}

const std::string& Atom::getSymbol() const
{
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
    std::cout << "Symbol: " << symbol << "\n";
    std::cout << "Atomic Number: " << atomicNumber << "\n";
    std::cout << "Neutrons: " << neutrons << "\n";
}

std::ostream& operator<<(std::ostream& os, const Atom& atom) {
    os << "Symbol: " << atom.symbol << "\n";
    os << "Atomic Number: " << atom.atomicNumber << "\n";
    os << "Neutrons: " << atom.neutrons << "\n";
    return os;

}