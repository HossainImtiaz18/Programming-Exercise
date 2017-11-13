#include <iostream>
#define inf 999999
#define row 20
#define col 20
using namespace std;

class graph_class
{
    int node,edge;
    int graph[row][col];
    public:
     void get_data(void);
     void display(void);
     void operation(void);

};
void graph_class::get_data(void)
{
    int x,y,w;
    cout<<"Enter the number of node and edges:\n";
    cin>>node>>edge;
    cout<<"Now enter the edges:\n";
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            graph[i][j]=inf;
        }
    }
    for(int i=1;i<=edge;i++)
    {
    cin>>x>>y>>w;
    graph[x][y]=w;
    }
}
void graph_class::display(void)
{
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int min(int a,int b)
{
    if(a>b)
    return(b);
    else
    return(a);
}
void graph_class::operation(void)
{
    for(int k=1;k<=node;k++)
    {
        for(int i=1;i<=node;i++)
        {
            for(int j=1;j<=node;j++)
            {
                graph[i][j]=min(graph[i][j],(graph[i][k]+graph[k][j]));
            }
        }
    }
}
int main()
{
     graph_class imt;
     imt.get_data();
     imt.display();
     imt.operation();
     imt.display();
    return 0;
}
