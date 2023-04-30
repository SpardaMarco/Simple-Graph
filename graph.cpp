#include "graph.h"
#include <climits>
#include <iostream>

Graph::Graph(bool directed) {
    directed_ = directed;
}

Vertex& Graph::findVertex(const int &id) {
    if(id < 0 || id >= (int) vertexVector_.size()) throw ("During findVertex: Vertex doesn't exist!");
    return vertexVector_[id];
}


bool Graph::addVertex() {
    if((int) vertexVector_.size() == INT_MAX) return false;
    vertexVector_.push_back(Vertex( (int) vertexVector_.size()));
    return true;
}

bool Graph::addEdge(const int source, const int dest, double weight) {
    if(source < 0 || dest < 0 || source >= (int) vertexVector_.size() || dest >= (int) vertexVector_.size() || source == dest) return false;
    Vertex& sourceVertex = vertexVector_[source];
    sourceVertex.addEdge(dest, weight);
    if(!directed_){
        Vertex& destVertex = vertexVector_[dest];
        destVertex.addEdge(source, weight);
    }
    return true;
}

int Graph::getNumVertex() const {
    return (int) vertexVector_.size();
}

void Graph::dfs(int source) {
    for(Vertex& v : vertexVector_){
        v.setPath(-1);
        v.setDist(-1);
        v.setProcessing(false);
        v.setVisited(false);
    }
    std::stack<int> stack;
    stack.push(source);

    while (!stack.empty()) {
        int currentVertex = stack.top();
        stack.pop();
        Vertex& vertex = findVertex(currentVertex);
        if(vertex.isVisited()) continue;

        vertex.setVisited(true);

        std::vector<Edge> &edges = vertex.getAdj();
        for (Edge &edge: edges) {
            int n = edge.getDest();
            Vertex &nVertex = findVertex(n);
            if (!nVertex.isVisited())
                stack.push(n);
        }
    }
}
