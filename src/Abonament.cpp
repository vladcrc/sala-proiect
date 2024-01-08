#include "../headers/Abonament.hpp"

Abonament::Abonament(int durataZile) : durataZile_(durataZile) {}

int Abonament::getDurata() const {
    return durataZile_;
}
