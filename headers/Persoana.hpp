#ifndef PERSOANA_HPP
#define PERSOANA_HPP

#include <string>

class Persoana {
public:
    Persoana(const std::string& nume, const std::string& prenume);
    virtual ~Persoana();
    virtual void afisareDetalii() const;

protected:
    std::string nume_;
    std::string prenume_;
};

#endif // PERSOANA_HPP
