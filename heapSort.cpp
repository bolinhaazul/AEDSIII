#include <iostream>
#include <windows.h>

using namespace std;

void heap(int vet[], int tam, int pai)
{
  int maior = pai;
  int esq = 2 * pai + 1;
  int dir = 2 * pai + 2;

  if (esq < tam && vet[esq] > vet[maior])
  {
    maior = esq;
  }
  if (dir < tam && vet[dir] > vet[maior])
  {
    maior = dir;
  }
  if (maior != pai)
  {
    swap(vet[pai], vet[maior]);

    heap(vet, tam, maior);
  }
}

void heapSort(int vet[], int tam)
{
  for (int i = tam / 2 - 1; i >= 0; i--)
  {
    heap(vet, tam, i);
  }
  for (int i = tam - 1; i >= 0; i--)
  {
    swap(vet[0], vet[i]);

    heap(vet, i, 0);
  }
}

void imprime(int vet[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    if (i > 0)
    {
      cout << " - " << vet[i];
    }
    else
      cout << vet[i];
  }
}

int main()
{
  int vet[] = {98, 51, 23, 6, 0, 147, 15, 49, 62};
  int tam = sizeof(vet) / sizeof(vet[0]);
  cout << "O vetor a ser ordenado e \n";
  imprime(vet, tam);
  for (int i = tam / 2 - 1; i >= 0; i--)
  {
    heap(vet, tam, i);
  }

  heapSort(vet, tam);
  cout << "\no vetor ordenado e: \n";
  imprime(vet, tam);
  return 0;
}