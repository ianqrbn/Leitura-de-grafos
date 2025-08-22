#include <bits/stdc++.h>
using namespace std;
#include <vector>

int A; // Quantidade de Arestas
int V;
int origem;
int destino;
int peso;
typedef struct Aresta
{
    int destino;
    int peso;
} Aresta;

typedef struct Grafo
{
    int tamanho = 0;
    vector<Aresta> listaAdj;
} Grafo;

int main()
{
    cin >> V >> A;
    vector<Grafo> grafo(V);
    vector<Aresta> listaAdj;
    for (int i = 0; i < A; i++)
    {
        cin >> origem >> destino >> peso;
        grafo[origem - 1].tamanho++;
        grafo[origem - 1].listaAdj.resize(grafo[origem - 1].tamanho);
        grafo[origem - 1].listaAdj[grafo[origem - 1].tamanho - 1].destino = destino;
        grafo[origem - 1].listaAdj[grafo[origem - 1].tamanho - 1].peso = peso;
    }

    for (int i = 0; i < V; i++)
    {
        if (grafo[i].tamanho > 0)
        {
            for (int j = 0; j < grafo[i].tamanho; j++)
            {
                printf("(%d -> %d) peso = %d\n", i + 1, grafo[i].listaAdj[j].destino, grafo[i].listaAdj[j].peso);
            }
        }
    }
}