#include <iostream>

constexpr int N_ELEMENTS = 100;

int main() {
  int* b = new int[N_ELEMENTS];           // eliras
  std::cout << "1-100 ertekek duplazasa"; // "", lezaras
  for (int i = 1; i <= N_ELEMENTS; i++)   // for ciklus
  {
    b[i] = i * 2;
  }
  for (int i = 1; i <= N_ELEMENTS; i++) // for ciklus
  {
    std::cout << "Ertek:" << b[i] << std::endl; // ertek nem irja, lezaras ;
  }
  std::cout << "Atlag szamitasa: " << std::endl;
  double atlag = 0;                     // int helyett double, atlag = 0
  for (int i = 1; i <= N_ELEMENTS; i++) // for ciklus
  {
    atlag += b[i]; // lezaras ;
  }
  atlag /= N_ELEMENTS;
  std::cout << "Atlag: " << atlag << std::endl;
  std::cout << "Jonapokat emberek jonapokat!" << std::endl;
  return 0;
}
