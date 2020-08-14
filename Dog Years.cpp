#include <iostream>

int main() {
  
  int dog_age, human_years, later_years;
  int early_years = 21;
  
  char dog_name [20];
  
//Dog's name
  std::cout << "What is your dog's name?\n";
    std::cin >> dog_name;
    
//Age of 2 year old dog
  std::cout << "The first two years of a dog's life count as 21 human years.\n";
  
  
//dog_age after 2 years
  std::cout << "Each following year counts as 4 human years.\n";
  std::cout << "Insert dog's age: \n";
    std::cin >> dog_age;
    later_years = (dog_age - 2) * 4;
    human_years = early_years + later_years;   
    
//Add early_years and later_years together to get human_years
  std::cout << "My name is " << dog_name << "!\n";
  std::cout << " Ruff ruff, I am " << human_years << " years old in human years.\n";
  
    
  
  
}