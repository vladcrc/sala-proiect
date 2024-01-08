#include "../headers/Client.hpp"
#include <iostream>

Client::Client(const std::string& nume, const std::string& prenume, const std::string& numarTelefon)
        : Persoana(nume, prenume), numarTelefon_(numarTelefon) {}

void Client::afisareDetalii() const {
    Persoana::afisareDetalii();
    std::cout << ", Numar Telefon: " << numarTelefon_;
}
