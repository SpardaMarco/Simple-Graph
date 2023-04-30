#ifndef SG_H
#define SG_H

#include "vertex.h"
#include <stack>

class Graph {
public:
    /*!
    * @brief Creates a graph.
    * Time Complexity: O(1).
    * @param directed bool to verify if graph is directed or not
    */
    explicit Graph(bool directed);

    /*!
    * @brief Find a vertex with a given ID.
    * Time Complexity: O(1).
    * @param id int identifier
    * @return reference to the vertex. Throws exception otherwise.
    */
    Vertex& findVertex(const int &id);

    /*!
    *  @brief Adds a vertex to the graph. ID of the vertex is the size of the vertexVector when vertex was added.
    * Time Complexity: O(1).
    *  @return true if successful, and false if a vertex with that content already exists.
    */
    bool addVertex();

    /*!
    * @brief Adds an edge to the graph, from source vertex to dest vertex with given weight.
    * Time Complexity: O(1).
    * @return true if successful, and false if the either vertex does not exist.
    */
    bool addEdge(int source, int dest, double weight);

    /*!
    * @brief Gives how many vertex there are in the graph.
    * Time Complexity: O(1).
    * @return number of vertex.
    */
    int getNumVertex() const;

    /*!
    * @brief Depth-First search example (iterative). Assumes that there is only one connected component.
    * Time Complexity: O(|V| + |E|), |V| being the number of vertex and |E| the number of edges of the graph.
    * @param source int identifies the starting point
    */
    void dfs(int source);

protected:
    std::vector<Vertex> vertexVector_;
    bool directed_;
};


#endif
