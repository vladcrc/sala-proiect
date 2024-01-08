#include "../headers/Antrenor.hpp"
#include <iostream>

Antrenor::Antrenor(const std::string& nume, const std::string& prenume, const std::string& specializare)
        : Persoana(nume, prenume), specializare_(specializare) {}

void Antrenor::afisareDetalii() const {
    Persoana::afisareDetalii();
    std::cout << ", Specializare: " << specializare_;
}
