#include "headers/SalaFitness.hpp"
#include <iostream>

void afisareMeniu() {
    std::cout << "\nMeniu:\n";
    std::cout << "1. Adauga client\n";
    std::cout << "2. Adauga antrenor\n";
    std::cout << "3. Afiseaza clienti\n";
    std::cout << "4. Afiseaza antrenori\n";
    std::cout << "0. Iesire\n";
}

int main() {
    SalaFitness& sala = SalaFitness::getInstance();

    while (true) {
        afisareMeniu();

        int optiune;
        std::cout << "Introduceti optiunea: ";
        std::cin >> optiune;

        switch (optiune) {
            case 1: {
                std::string nume, prenume, numarTelefon;
                std::cout << "Nume: ";
                std::cin >> nume;
                std::cout << "Prenume: ";
                std::cin >> prenume;
                std::cout << "Numar Telefon: ";
                std::cin >> numarTelefon;

                Client client(nume, prenume, numarTelefon);

                int durataAbonament;
                std::cout << "Durata abonament (zile): ";
                std::cin >> durataAbonament;

                Abonament abonament(durataAbonament);

                sala.adaugaClient(client, abonament);
                break;
            }
            case 2: {
                std::string nume, prenume, specializare;
                std::cout << "Nume: ";
                std::cin >> nume;
                std::cout << "Prenume: ";
                std::cin >> prenume;
                std::cout << "Specializare: ";
                std::cin >> specializare;

                Antrenor antrenor(nume, prenume, specializare);
                sala.adaugaAntrenor(antrenor);
                break;
            }
            case 3:
                sala.afisareClienti();
                break;
            case 4:
                sala.afisareAntrenori();
                break;
            case 0:
                return 0;
            default:
                std::cout << "Optiune invalida. Va rugam introduceti o optiune valida.\n";
        }
    }

    return 0;
}
