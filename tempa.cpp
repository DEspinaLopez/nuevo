#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int **imagen;
bool **vis;

// 0 arriba
// 1 derecha
// 2 abajo
// 3 izquierda

class nodo
{
public:
    nodo(int id, int val, int pX, int pY, int m[4])
    {
        valor = val;
        identificador = id;
        x = pX;
        y = pY;
        for (int i = 0; i < 4; i++)
        {
            mirando[i] = m[i];
        }
    }
    int valor;
    int identificador;
    int x,y;
    int mirando[4];
};

bool comparar (const nodo &a, const nodo &b)
{
    return a.valor < b.valor;
}

class nodos
{
public:
    struct compare()
    set<nodo> asd;
};

class arbol
{
public:
    void anadir(set<nodo> nuevo)
    {
        arboles.push_back(nuevo);
    }
    void mostrar()
    {
        for (int i = 0; i < arboles.size(); i++)
        {
            it = arboles[i].begin();
            while(it != arboles[i].end())
            {
                nodo actual = *it;
                cout << actual.x << " " << actual.y << "   ";
                for (int i = 0; i < 4; i++)
                {
                    cout << actual.mirando[i] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }
    vector< set<nodo> > arboles;
    set<nodo>::iterator it;
};

bool operator<(const nodo &a, const nodo &b)
{
    return a.identificador < b.identificador;
}


arbol encontrar_arboles (nodo nodos, int tamX, int tamY)
{
    arbol arboles;
    for (int ii = 0; ii < tamY; ii++)
    {
        for (int jj = 0; jj < tamX; jj++)
        {

        }
    }
}

int main ()
{
    int tamX, tamY;
    cin >> tamX >> tamY;
    imagen = new int*[tamY];
    vis = new bool*[tamY];
    for (int i = 0; i < tamY; i++)
    {
        imagen[i] = new int[tamX];
        vis[i] = new bool[tamX];
    }
}
