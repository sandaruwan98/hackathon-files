
#include <iostream>
#include <list>
using namespace std;

class Graph
{
    list<int> *gph;
    int v;
    int *inDegree;
    int *outDegree;
    int x=0;
    int *parent;
    int *pc;
   

public: 
    int xcount;
    Graph(int v);
    void AddNode(int v, int w);
    void BFS(int s);
    void DFS();
    void Visit(int v, char *visited,int p);
    void FindInDegree();
    void FindOutDegree();
};

Graph::Graph(int v)
{
    this->v = v;
    gph = new list<int>[v];
    inDegree = new int[v];
    outDegree = new int[v];
    x=0;
    xcount=0;
    parent = new int[v];
    pc = new int[v];
}

void Graph::AddNode(int v, int w)
{
    gph[v].push_back(w);
}

void Graph::DFS()
{
    char *visited = new char[v];
  
    int i;
    for (i = 0; i < v; i++){
        visited[i] = 'W';
        parent[i] = 0;
        pc[i] = 0;
    }

    for (i = 0; i < v; i++)
        if (visited[i] == 'W')
            Visit(i, visited,0);
}

void Graph::Visit(int v, char *visited,int p)
{
    visited[v] = 'D';
    parent[v] = p;
  
    list<int>::iterator i;
    for (i = gph[v].begin(); i != gph[v].end(); ++i)
    {
        if (visited[*i] == 'W')
        {
            pc[v]=pc[v]+1;
            Visit(*i, visited,v);
        }
        

    }

    cout << v << endl;
    x++;
    cout << "xc -" << pc[v]<< "   " <<x<< endl;
    if ((pc[v]%2==1) && v!=0)
    {
        pc[parent[v]]--;
        xcount++;
        
        x=0;

    }
    
}

void Graph::FindInDegree()
{
    int i;
    for (i = 0; i < v; i++)
        inDegree[i] = 0;

    for (i = 0; i < v; i++)
    {
        list<int>::iterator j;
        for (j = gph[i].begin(); j != gph[i].end(); ++j)
            inDegree[*j]++;
    }

    for (i = 0; i < v; i++)
        cout << i << " -- " << inDegree[i] << endl;
}

void Graph::FindOutDegree()
{
    int i;
    for (i = 0; i < v; i++)
        outDegree[i] = 0;

    for (i = 0; i < v; i++)
    {
        list<int>::iterator j;
        for (j = gph[i].begin(); j != gph[i].end(); ++j)
            outDegree[i]++;
    }

    for (i = 0; i < v; i++)
        cout << i << " -- " << outDegree[i] << endl;
}

int main()
{
    int n,r;
    cin >> n >> r;
    Graph g(n);
    for (size_t i = 0; i < r; i++)
    {
        int a,b;
        cin >> a >>b;
        g.AddNode(a-1,b-1);
        g.AddNode(b-1,a-1);
    }
    
    
    // g.AddNode(1, 0);
    // g.AddNode(2,0 );
    // g.AddNode(3,0 );
    // g.AddNode(4,0 );
    // g.AddNode(5,3 );
    // g.AddNode(6,3 );
    // g.AddNode(7,1 );
   

    // g.AddNode(0,1);
    // g.AddNode(0,2 );
    // g.AddNode(0,3 );
    // g.AddNode(0,4 );
    // g.AddNode(3,5 );
    // g.AddNode(3,6 );
    // g.AddNode(1,7 );
    // cout << endl
    //      << "BFS" << endl;
    // g.BFS(2);
    // cout << endl;
        // cout << "DFS" << endl;
    g.DFS();
    cout << endl<< endl << g.xcount;
    // cout << endl
    //      << "InDegree" << endl;
    // g.FindInDegree();
    // cout << endl
    //      << "OutDegree" << endl;
    // g.FindOutDegree();
    return 0;
}

// 0   1
// 1   3
// 2   1
// 3   0
