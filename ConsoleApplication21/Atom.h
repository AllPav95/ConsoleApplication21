#ifndef ATOM_H
#define ATOM_H

#include <string>

class Atom {
public:
    Atom(const std::string& symbol, int atomicNumber, int neutrons, int nucleusCharge = 0);

    Atom operator+(const Atom& other) const;

    const std::string& getSymbol() const;
    int getAtomicNumber() const;
    int getNeutrons() const;
    int getNucleusCharge() const;
   
    void printInfo() const;
    friend std::ostream& operator<<(std::ostream& os, const Atom& atom);

private:
    std::string symbol;       
    int atomicNumber;         
    int neutrons;             
    int nucleusCharge;       
        
};

#endif