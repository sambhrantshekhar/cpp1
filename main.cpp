#include <iostream>

int add(int i1, int i2){
  int sum = i1 + i2;
  return sum;
}

int main(){
  
  int s1= 23;
  int s2= 2;

  int sum= add(s1, s2);
  std::cout << sum << std::endl;
} 