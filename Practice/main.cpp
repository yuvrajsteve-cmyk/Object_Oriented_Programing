#include <iostream>
#include <vector>
#include <queue>

void bfs(int start, std::vector<std::vector<int>> &graph, int totalNodes)
{

    std::vector<bool> visited(totalNodes, false);

    std::queue<int> q;

    q.push(start);
    visited[start] = true;

    std::cout << "BFS Traversal Output: ";

    while (!q.empty())
    {

        int currentNode = q.front();
        q.pop();

        std::cout << currentNode << " ";

        for (int neighbor : graph[currentNode])
        {

            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}
int main()
{
    int totalNodes = 5;

    // Adjacency List
    std::vector<std::vector<int>> graph(totalNodes);

    graph[0].push_back(1);
    graph[0].push_back(2);

    graph[1].push_back(0);
    graph[1].push_back(3);
    graph[1].push_back(4);

    graph[2].push_back(0);
    graph[2].push_back(4);

    graph[3].push_back(1);

    graph[4].push_back(1);
    graph[4].push_back(2);

    bfs(0, graph, totalNodes);
    return 0;
}