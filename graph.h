#ifndef SG_H
#define SG_H

#include "vertex.h"

class Graph {
public:
    /*!
     * @brief Creates a graph.
     * @param directed bool to verify if graph is directed or not
     */
    explicit Graph(bool directed);

    /*!
     * @brief Auxiliary function to find a vertex with a given ID.
     * @param id int identifier
     * @param vertex Vertex object where to place the vertex
     * @return true if found, false otherwise.
     */
    bool findVertex(const int &id, Vertex& vertex);

    /*!
     *  @brief Adds a vertex to the graph. ID of the vertex is the size of the vertexVector when vertex was added.
     *  @return true if successful, and false if a vertex with that content already exists.
     */
    bool addVertex();

    /*!
     * @brief Adds an edge to the graph, from source vertex to dest vertex with given weight.
     * @return true if successful, and false if the either vertex does not exist.
     */
    bool addEdge(int source, int dest, double weight);

    /*!
     * @brief Gives how many vertex there are in the graph.
     * @return number of vertex
     */
    int getNumVertex() const;

protected:
    std::vector<Vertex> vertexVector_;
    bool directed_;
};


#endif
