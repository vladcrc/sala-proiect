#ifndef SALAFITNESS_HPP
#define SALAFITNESS_HPP

#include "Client.hpp"
#include "Abonament.hpp"
#include "Antrenor.hpp"
#include <vector>

class SalaFitness {
public:
    static SalaFitness& getInstance();  // Metoda de acces la instanță
    SalaFitness(const SalaFitness&) = delete;  // Dezactivează constructorul de copiere
    SalaFitness& operator=(const SalaFitness&) = delete;  // Dezactivează operatorul de atribuire

    void adaugaClient(const Client& client, const Abonament& abonament);
    void adaugaAntrenor(const Antrenor& antrenor);
    void afisareClienti() const;
    void afisareAntrenori() const;

private:
    SalaFitness();  // Constructor privat

    std::vector<std::pair<Client, Abonament>> clienti_;
    std::vector<Antrenor> antrenori_;
};

#endif // SALAFITNESS_HPP
