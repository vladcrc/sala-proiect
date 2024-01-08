#ifndef ANTRENOR_HPP
#define ANTRENOR_HPP

#include "Persoana.hpp"

class Antrenor : public Persoana {
public:
    Antrenor(const std::string& nume, const std::string& prenume, const std::string& specializare);
    void afisareDetalii() const override;

private:
    std::string specializare_;
};

#endif // ANTRENOR_HPP
