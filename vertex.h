#ifndef SG_VERTEX_H
#define SG_VERTEX_H

#include <vector>
#include <algorithm>
#include "edge.h"

class Vertex {
public:
    explicit Vertex(int id);
    int getId() const;
    bool isVisited() const;
    bool isProcessing() const;
    double getDist() const;
    int getPath() const;
    std::vector<Edge> getAdj() const;
    std::vector<Edge>& getAdj();

    void setId(int id);
    void setVisited(bool visited);
    void setProcessing(bool processing);
    void setDist(double dist);
    void setPath(int path);
    void addEdge(int dest, double weight);
protected:
    int id_;
    std::vector<Edge> adj_;

    bool visited_ = false;
    bool processing_ = false;
    double dist_ = 0;
    int path_ = -1;
};

#endif
