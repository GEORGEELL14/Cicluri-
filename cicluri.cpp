/*
Cicluri euleriene
[a] Precoditii : graful este conex si dradele tuturor varfurilor sunt pare
[b] Strategii :

      Algoritmul lucreaza avand la baza ideea unor includeri
      de cicluri in cicluri pana cand ciclul rezultat contine toate muchiile

      b1) strategia "ma grabesc"

      adica ma  grabesc sa gasesc inchiderea ciclului din nodul din care
      am pornit exploararea.

      Strategia ( si in functie de forma grafului ) nu este optima
      deoarece genereaza foarte multe operatii de includere de cicluri
      in cicluri.
      Optimizarea vizeaza cat mai putine astfel de operatii adica
      altfel spus ciclurile construite sa fie cat mai lungi

      b) strategia "nu ma grabesc"

      Raman pe nod pornind explorari pana cand gradul
      devine 0 ( adica nu mai sunt posibilitati de a cosntrui
      cicluri din el )  "raman" pe nod  pana cand il rezolv
      Implementare naturala prin recursivitate/
*/
#include<iostream>
#include<fstream>
using namespace std;
int G[100][100];
int n;
int C1[10000];
int nc1;
int C2[10000];
int nc2;
int V[100];
int grades[100];


int read_data()
{
// citeste n numarul  nodurilor
// si matricea de adiacenta asociata grafului
}

int insertion(int C1[],int *nc1,int C2[],int nc2,int k)
{
// in interiorul vectorului C1 de dim nc1 in pozitie k
// inserez continutului vectorului C2 de dim nc2
// => deplasare , insertie
}

int init_data()
{
// calculeaza in grades[100]  gradele tuturor varfurilor

}

int explore(int G[100][100],int n,int node,int solution[100])
{
// parcurge DFS graful G cu n noduri  incepand cu nod "node"
// lista nodurilor parcurse pana la inchiderea ciclului urmand a
// fi depusa in 'solution'
// att : decrementez gradele nodurilor prin care trec
}

int euler()
{
// strategie ma grabesc , iterativ , dfs iterativ
// caut prim nod nevizitat ( pentru a porni explorare din el )
int gasit=1;
while  (gasit==1)
  {
        gasit=0;
        for(int i=1;i<=n;i++)
        {
            if ( V[i]==0 ) {   int counter;
                                    counter=explore(G,n,i,C1);
                                    for (int j=1;j<=counter;j++)
                                       {
                                            if (grades[C1[j]]>0) {
                                                int numbers;
                                                numbers=explore(G,n,j,C2);
                                                insertion(C1,&counter,C2,numbers,j);
                                                                          }
                                       }
                                }
        }
  }
}

int print_data()
{
// afiseaza C1
}

int main()
{
read_data();
init_data();
euler();
print_data();
}
