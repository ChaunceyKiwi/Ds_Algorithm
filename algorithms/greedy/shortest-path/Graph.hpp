#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>
#include <list>
#include <utility>
#include <iostream>
#include <climits>
#include <set>

using namespace std;

class Graph {
  private:
    int verticesCount;
    list<pair<int, float>> *adjacencyLists;
  public:
    Graph(int verticesCount);
    void addEdge(int index1, int index2, float cost);
    void calculate_shortest_path_from(int index);
    int calculate_shortest_path_from_to(int source, int target);
    int calculate_shortest_path_from_to2(int source, int target);
};

#endif /* Graph_hpp */
