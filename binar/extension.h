#ifndef EXTENSION_H_INCLUDED
#define EXTENSION_H_INCLUDED

#include <iostream>
#include <string>

class c_numeration{
private:
  unsigned short m_nbBase10;
public:
  c_numeration();
  ~c_numeration();
  //bool setNbBase10(unsigned short nb);
  bool setNbBase10(char *nb);
  unsigned short getNbBase10();
  unsigned short convASCII2Int(char *nb, int taille);
  std::string DeterminerBinaire();
  std::string DeterminerOctal();
  std::string DeterminerHexa();
  std::string DetermineShadok();
  std::string DeterminerNombre(char base);

};

#endif // EXTENSION_H_INCLUDED
