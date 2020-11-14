#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
     unsigned int licznik = 0;
  unsigned int liczbaZaglowcow = 0;
  Stocznia stocznia{};

  while (licznik<towar) {

    Statek* s1 = stocznia();
    unsigned int iloscTowaru = s1->transportuj();
    licznik = licznik + iloscTowaru;
    
    if (Zaglowiec* z = dynamic_cast<Zaglowiec*>(*s1)) {
     liczbaZaglowcow = liczbaZaglowcow + 1;
    }

    delete s1;
  }

  return liczbaZaglowcow;
    
}
