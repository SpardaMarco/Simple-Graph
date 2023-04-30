#ifndef SG_VERTEX_H
#define SG_VERTEX_H

#include <vector>
#include <algorithm>
#include "edge.h"

class Vertex {
public:

    /*!
    * @brief Creates a default vertex not to be used in a graph.
    * Time Complexity: O(1).
    * @param id int identifier
    */
    Vertex();

    /*!
    * @brief Creates a vertex with given identifier.
    * Time Complexity: O(1).
    * @param id int identifier
    */
    explicit Vertex(int id);

    /*!
    * @brief Gets the vertex id.
    * Time Complexity: O(1).
    * @return identifier.
    */
    int getId() const;

    /*!
    * @brief Checks if vertex is visited.
    * Time Complexity: O(1).
    * @return true if visited, false otherwise.
    */
    bool isVisited() const;

    /*!
    * @brief Checks if vertex is processing.
    * Time Complexity: O(1).
    * @return true if processing, false otherwise.
    */
    bool isProcessing() const;

    /*!
    * @brief Gets vertex distance.
    * Time Complexity: O(1).
    * @return distance.
    */
    double getDist() const;

    /*!
    * @brief Gets vertex path.
    * Time Complexity: O(1).
    * @return identifier of the path.
    */
    int getPath() const;

    /*!
    * @brief Gets the vector of edges outgoing of the node.
    * Time Complexity: O(1).
    * @return vector of adjacent.
    */
    std::vector<Edge> getAdj() const;

    /*!
    * @brief Gets the vector of edges outgoing of the node.
    * Time Complexity: O(1).
    * @return vector of adjacent.
    */
    std::vector<Edge>& getAdj();

    /*!
    * @brief Sets visited to new value.
    * Time Complexity: O(1).
    * @param visited bool representing new value.
    */
    void setVisited(bool visited);

    /*!
    * @brief Sets processing to new value.
    * Time Complexity: O(1).
    * @param processing bool representing new value.
    */
    void setProcessing(bool processing);

    /*!
    * @brief Sets distance to new value.
    * Time Complexity: O(1).
    * @param dist double representing new value.
    */
    void setDist(double dist);

    /*!
    * @brief Sets path to new value.
    * Time Complexity: O(1).
    * @param path int representing new value.
    */
    void setPath(int path);

    /*!
    * @brief Adds edge to adjacency vector to dest vertex with given weight.
    * Time Complexity: O(1).
    * @param dest int identifier of the destination vertex.
    * @param weight double weight of the edge.
    */
    void addEdge(int dest, double weight);
protected:
    int id_;
    std::vector<Edge> adj_;

    bool visited_ = false;
    bool processing_ = false;
    double dist_ = -1;
    int path_ = -1;
};

#endif
