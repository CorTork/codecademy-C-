#include <iostream>

int main() {
  
double pesos;
double reais;
double soles;
double dollars;

std::cout << "Enter number of Columbian Pesos:\n";
  std::cin >> pesos;

std::cout << "Enter number of Brazillian Reais:\n";
 std::cin >> reais; 
  
std::cout << "Enter number of Peruvian Soles:\n";
  std::cin >> soles;
  
/*
1 US Dollar =
Columbian Peso = 0.00031
Brazillian Real = 0.25
Peruvian Sol = 0.3
*/
// Conversion of foreign to US dollars  
dollars = (0.00031 * pesos) + (0.25 * reais) + (0.3 * soles);

std::cout << "US Dollars = $" << dollars << "\n";
}