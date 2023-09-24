#ifndef MOLECULE_H
#define MOLECULE_H

#include <vector>
#include "Atom.h"

class Molecule {
public:
    Molecule(const std::string& name);
    void addAtom(const Atom& atom);
    void printInfo() const;

private:
    std::string name;         
    std::vector<Atom> atoms;  
};

#endif