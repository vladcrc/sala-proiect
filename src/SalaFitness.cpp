#include "../headers/SalaFitness.hpp"
#include <iostream>

SalaFitness::SalaFitness() {}  // Constructor privat

SalaFitness& SalaFitness::getInstance() {
    static SalaFitness instance;  // Se creează o singură dată la prima apelare
    return instance;
}

void SalaFitness::adaugaClient(const Client& client, const Abonament& abonament) {
    clienti_.push_back(std::make_pair(client, abonament));
}

void SalaFitness::adaugaAntrenor(const Antrenor& antrenor) {
    antrenori_.push_back(antrenor);
}

void SalaFitness::afisareClienti() const {
    std::cout << "Lista de clienti:\n";
    for (const auto& pair : clienti_) {
        pair.first.afisareDetalii();
        std::cout << ", Durata Abonament: " << pair.second.getDurata() << " zile\n";
    }
}

void SalaFitness::afisareAntrenori() const {
    std::cout << "Lista de antrenori:\n";
    for (const auto& antrenor : antrenori_) {
        antrenor.afisareDetalii();
        std::cout << "\n";
    }
}
