#include <iostream>
#include <windows.h>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
  ifstream inFile;
  inFile.open("texto1.txt", ios::in);
  if (!inFile)
  {
    cout << "Arquivo nao pode ser aberto" << endl;
  }
  string arquivo;
  getline(inFile, arquivo);
  inFile.close();
  string bloco1;
  string bloco2;
  string bloco3;
  string bloco4;
  for (int i = 0; i < arquivo.length(); i++)
  {
    bloco1.append(arquivo.substr(i, i + 1));
    arquivo.erase(i, i + 1);
    bloco2.append(arquivo.substr(i, i + 1));
    arquivo.erase(i, i + 1);
    bloco3.append(arquivo.substr(i, i + 1));
  }

  return 0;
}