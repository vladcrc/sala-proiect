#include "../headers/Persoana.hpp"
#include <iostream>

Persoana::Persoana(const std::string& nume, const std::string& prenume)
        : nume_(nume), prenume_(prenume) {}

Persoana::~Persoana() {}

void Persoana::afisareDetalii() const {
    std::cout << "Nume: " << nume_ << ", Prenume: " << prenume_;
}
