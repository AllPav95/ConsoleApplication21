#ifndef MOLECULE_H
#define MOLECULE_H
#include <string>
#include <vector>
#include "Atom.h"

class Molecule {
public:
    Molecule();
    Molecule(const std::string& name);

    bool operator==(const Molecule& other) const;
    bool operator!=(const Molecule& other) const;

#pragma region GettersAndSetters

    const std::string& getName() const;
    void setName(const std::string& name);

#pragma endregion

    Molecule operator+(const Molecule& other) const;

    void addAtom(const Atom& atom);
    void printInfo() const;

    Atom& operator[](size_t index);

    const Atom& operator[](size_t index) const;
private:
    std::string name;         
    std::vector<Atom> atoms;  
};

#endif