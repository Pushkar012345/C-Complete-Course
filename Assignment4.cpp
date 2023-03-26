
#define infinity 9999
#define MAX 20

#include<iostream>
#include<stdlib.h>

using namespace std;
class Q
{
 // int MAX;
  int data[30];
  int R, F;

public:
   // int MAX;
    Q ()
  {
    R = F = -1;
  }

  void init ()
  {
    R = F = -1;
  }

  int empty ()
  {
    if (R == -1)
      {
	return 1;
      }
    return 0;
  }

  void insert (int x)
  {
    if (empty ())
      {
	R = F = 0;
      }
    else
      {
	R = R + 1;
      }
    data[R] = x;
  }

  int Delete ()
  {
    int x = data[F];
    if (R == F)
      {
	R = F = -1;
      }
    else
      {
	F = F + 1;
      }
    return (x);
  }
};

struct node
{
  int vertex;
  node *next;

};

class graph
{
  node *G[20];
  int n;

  int visited[MAX];

  void insert (int vi, int vj);
  void DSF1 (int);


public:
    graph ()
  {
    n = 0;
  }

  void readgraph ();
  void printgraph ();
  void BFS (int);
  void DSF (int);
};


void
graph::readgraph ()
{
  int i, vi, vj, no_of_edges;
  cout << "\nEnter no of vertices:";
  cin >> n;

  for (int i = 0; i < n; i++)
    {
      G[i] = NULL;
    }

  cout << "\nEnter no of edges:";
  cin >> no_of_edges;

  for (int i = 0; i < no_of_edges; i++)
    {
      cout << "\nEnter an edge(u,v):";
      cin >> vi >> vj;
      insert (vi, vj);
      insert (vj, vi);
    }
}

void
graph::insert (int vi, int vj)
{
  node *p, *q;

  q = new node;
  q->vertex = vj;
  q->next = NULL;

  if (G[vi] == NULL)
    {
      G[vi] = q;
    }
  else
    {
      p = G[vi];
      while (p->next != NULL)
	{
	  p = p->next;
	}
      p->next = q;
    }

}

void
graph::printgraph ()
{
  int i, j;
  node *p;
  for (int i = 0; i < n; i++)
    {
      cout << "\nVertex" << i;
      for (p = G[i]; p = NULL; p = p->next)
	{
	  cout << "->" << p->vertex;
	}
    }
}

void
graph::DSF1 (int i)
{
  node *p;
  cout << "\n" << i;
  p = G[i];
  visited[i] = 1;
  while (p != NULL)
    {
      i = p->vertex;
      if (!visited[i])
	{
	  DSF1 (i);
	}

      p = p->next;
    }
}

void
graph::BFS (int v)
{
  int i, w;
  Q q;
  node *p;
  for (int i = 0; i < n; i++)
    {
      visited[i] = 0;
    }
  q.insert (v);
  cout << "\nVisit" << v;
  visited[v] = 1;
  while (!q.empty ())
    {
      v = q.Delete ();

      for (p = G[v]; p != NULL; p = p->next)
	{
	  w = p->vertex;
	  if (visited[w] == 0)
	    {
	      q.insert (w);
	      visited[w] = 1;
	      cout << "\n Visit" << w;

	    }
	}
    }
}

int main ()
{
  int op, start, n;
  graph g1;


  do
    {
      cout << "\n\n1)create a graph \n2)BFS \n3)DFS \n4)Quit";
      cout << "\nEnter your choice:";
      cin >> op;

      switch (op)
	{
	case 1:
	  g1.readgraph ();
	  g1.printgraph ();
	  break;

	case 2:
	  cout << "\nEnter starting node:";
	  cin >> start;
	  g1.BFS (start);
	  break;

	case 3:
	  cout << "\nEnter starting node:";
	  cin >> start;
	  g1.DSF (start);
	  break;


	}



    }
  while (op != 4);
  return 0;
}
