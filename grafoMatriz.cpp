#include <bits/stdc++.h>
using namespace std;

int A; // Quantidade de Arestas
int V;
int origem, destino, valor;

int main()
{
    cin >> V >> A;
    int grafo[V][V];

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            grafo[i][j] = 0;
        }
    }

    for (int i = 0; i < A; i++)
    {
        cin >> origem >> destino >> valor;
        grafo[origem - 1][destino - 1] = valor;
    }

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (grafo[i][j] != 0)
            {
                printf("(%d -> %d) peso = %d\n", i + 1, j + 1, grafo[i][j]);
            }
        }
    }
}