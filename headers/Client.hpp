#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Persoana.hpp"

class Client : public Persoana {
public:
    Client(const std::string& nume, const std::string& prenume, const std::string& numarTelefon);
    void afisareDetalii() const override;

private:
    std::string numarTelefon_;
};

#endif // CLIENT_HPP
