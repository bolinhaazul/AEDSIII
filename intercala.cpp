#include <iostream>
#include <windows.h>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
  ofstream outFile;
  ifstream inFile;
  inFile.open("texto1.txt", ios::in);
  if (!inFile)
  {
    cout << "Arquivo nao pode ser aberto" << endl;
  }
  else
  {
    cout << "Digite a string para ser intercalada" << endl;
  }

  return 0;
}