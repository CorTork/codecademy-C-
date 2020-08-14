#include <iostream>

int main() {
  
  // The magic starts here
  
int Gryffindor = 0;
int Hufflepuff = 0;
int Ravenclaw = 0;
int Slytherin = 0;
  
int ans1, ans2, ans3, ans4;
 
  
std::cout << "            =        \n";
std::cout << "           ===       \n";
std::cout << "          =====      \n";
std::cout << "         =======     \n";
std::cout << "       '''''''''''   \n";
std::cout << "   The Sorting Hat Quiz!\n";
  
// Question 1
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n 1) The Good\n 2) The Great\n 3) The Wise\n 4) The Bold\n";

  std::cout << "Type your answer.\n";
  std::cin >> ans1;
  
if (ans1 == 1) {
  Hufflepuff ++;
}

if (ans1 == 2) {
  Slytherin ++;
}

if (ans1 == 3) {
  Ravenclaw ++;
}

if (ans1 == 4) {
  Gryffindor ++;
}
  
else if (ans1 < 1 or ans1 > 4) {
  std::cout << "Invalid Input\n";
}

// Question 2
  std::cout << "Q2) Dawn or Dusk?\n 1) Dawn\n 2) Dusk\n";
  
  std::cout << "Type your answer.\n";
  std::cin >> ans2;
  
if (ans2 == 1) {
  Gryffindor and Ravenclaw ++;
}

if (ans2 == 2) {
  Hufflepuff and Slytherin ++;
}

else if (ans2 < 1 or ans2 > 2) {
  std::cout << "Invalid Input\n";
}

// Question 3
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n 1) The violin\n 2) The trumpet\n 3) The piano\n 4) The drum\n";
  
  std::cout << "Type your answer.\n";
  std::cin >> ans3;
  
if (ans3 == 1) {
  Slytherin ++;
}

if (ans3 == 2) {
  Hufflepuff ++;
}

if (ans3 == 3) {
  Ravenclaw ++;
}

if (ans3 == 4) {
  Gryffindor ++;
}

else if (ans3 < 1 or ans3 > 4) {
  std::cout << "Invalid Input\n";
}

// Question 4
  std::cout << "Q4) Which road tempts you the most?\n 1) The wide, sunny, grassy lane\n 2) The narrow, dark, lantern-light alley\n 3) The twisting, leaf-threwn path through the woods\n 4) The cobbled street lined (ancient buildings)\n";
  
  std::cout << "Type your answer.\n";
  std::cin >> ans4;

if (ans4 == 1) {
  Hufflepuff ++;
}

if (ans4 == 2) {
  Slytherin ++;
}
  
if (ans4 == 3) {
  Gryffindor ++;
}
  
if (ans4 == 4) {
  Ravenclaw ++;
}

else if (ans4 < 1 or ans4 > 4) {
  std::cout << "Invalid Input\n";
} 
  
// Answer to house 
  int max = 0;
  std::string house;
  
  if (Gryffindor > max) {
    max = Gryffindor;
    house = "Gryffindor";
  }
  
  if (Hufflepuff > max) {
    max = Hufflepuff;
    house = "Hufflepuff";
  }
  
  if (Ravenclaw > max) {
    max = Ravenclaw;
    house = "Ravenclaw";
  }
  
  if (Slytherin > max) {
    max = Slytherin;
    house = "Slytherin";
  }

  std::cout << house << "!\n";

}