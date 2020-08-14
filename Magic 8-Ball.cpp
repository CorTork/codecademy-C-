#include <iostream>
#include <cstdlib>

int main(){

srand(time(NULL));
int ans = std::rand() % 10;
   
 // Your future is here
std::cout << "MAGIC 8-BALL:\n";
  
if (ans == 0) {
  std::cout << "It is certain\n";
}

else if (ans == 1) 
  std::cout << "It is decidedly so!\n";

else if (ans == 2)
  std::cout << "Without a doubt!\n";

else if (ans == 3)
  std::cout << "All signs point to yes!\n";

else if (ans == 4)
  std::cout << "Ask again at a later time.\n";

else if (ans == 5)
  std::cout << "Your future seems hazy.\n";
  
else if (ans == 6)
  std::cout << "Don't count on it.\n";

else if (ans == 7)
  std::cout << "It is very unlikely.\n";

else if (ans == 8)
  std::cout << "Yeah right scrub.\n";

else if (ans == 9)
  std::cout << "Get Gud and try again.\n";

else if (ans == 10)
  std::cout << "Pfft, not in a million years.\n";
else {
  std::cout << "Very doubtful\n";
}


 
  
  
  
}