#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<vector<int>> edges;
vector<bool> visited;

void dfs(int node)
{
    cout << node << " ";
    visited[node] = true;

    for (auto x : edges[node])
    {
        if (visited[x] == false)
        {
            dfs(x);
        }
    }
}

//! local stack based implementation
// void dfs(int node)
// {
//     stack<int> stack;
//     stack.push(node);

//     while (!stack.empty())
//     {
//         int currentNode = stack.top();
//         stack.pop();

//         if (!visited[currentNode])
//         {
//             visited[currentNode] = true;

//             for (auto x : edges[currentNode])
//             {
//                 if (visited[x] == false)
//                 {
//                     stack.push(x);
//                 }
//             }
//         }
//     }
// }

int main()
{
    int numberOfNodes;
    cin >> numberOfNodes;
    int numberOfEdges;
    cin >> numberOfEdges;

    visited = vector<bool>(numberOfNodes + 1, false);
    edges = vector<vector<int>>(numberOfNodes + 1);

    for (int i = 0; i < numberOfEdges; i++)
    {
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    dfs(1);

    return 0;
}