#include <iostream>

constexpr int N_ELEMENTS = 100;

int main() {
  int* b = new int[NELEMENTS];           // eliras
  std::cout << '1-100 ertekek duplazasa' // "", lezaras
      for (int i = 0;)                   // for ciklus
  {
    b[i] = i * 2;
  }
  for (int i = 0; i; i++) // for ciklus
  {
    std::cout << "Ertek:" // ertek nem irja, lezaras ;
  }
  std::cout << "Atlag szamitasa: " << std::endl;
  int atlag;                           // int helyett double, atlag = 0
  for (int i = 0; i < N_ELEMENTS, i++) // for ciklus
  {
    atlag += b[i] // lezaras ;
  }
  atlag /= N_ELEMENTS;
  std::cout << "Atlag: " << atlag << std::endl;
  return 0;
}
