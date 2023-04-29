#ifndef SG_EDGE_H
#define SG_EDGE_H

class Edge {
public:
    /*!
    * @brief Creates a Edge with given source, destination and weight.
    * @param source int source identifier
    * @param dest int source identifier
    * @param weight double weight
    */
    Edge(int source, int dest, double weight);

    /*!
    * @brief Gets the edge source id.
    * @return identifier.
    */
    int getSource() const;

    /*!
    * @brief Gets the edge dest id.
    * @return identifier.
    */
    int getDest() const;

    /*!
    * @brief Gets the edge weight id.
    * @return weight.
    */
    double getWeight() const;

    /*!
    * @brief Checks if edge is selected.
    * @return true if selected, false otherwise..
    */
    bool isSelected() const;

    /*!
    * @brief Sets selected to new value.
    * @param selected bool representing new value.
    */
    void setSelected(bool selected);

    /*!
    * @brief Sets weight to new value.
    * @param weight double representing new value.
    */
    void setWeight(double weight);
protected:
    int source_;
    int dest_;
    double weight_;

    bool selected_ = false;
};

#endif
