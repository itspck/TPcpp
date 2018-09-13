/* Q1

#include <iostream>
using namespace std;


int main(int argc, char ** argv)
{
  for(int i=0; i< 120; ++i)
    cout << "Bonjour les ZZ" << 2 << endl;

  return 0;
}

*/

/*
#include <iostream>

int main(int argc, char ** argv)
{
  for(int i=0; i< 120; ++i)
    std::cout << "Bonjour les ZZ" << 2 << std::endl;

  return 0;
}*/

#include <iostream>
#include <string>

int main(int, char **)
{
  std::string prenom; // type spécial pour les chaînes de caractères
  int age;

  std::cout << "Quel est votre prénom ?" << std::endl;
  std::cin >> prenom;
  std::cout << "Quel est votre age ?" << std::endl;
  std::cin >> age ;
  std::cout << "Bonjour "<< prenom << std::endl;

  return 0;
}
