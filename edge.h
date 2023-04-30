#ifndef SG_EDGE_H
#define SG_EDGE_H

class Edge {
public:
    /*!
    * @brief Creates a Edge with given source, destination and weight.
    * Time Complexity: O(1).
    * @param source int source identifier
    * @param dest int source identifier
    * @param weight double weight
    */
    Edge(int source, int dest, double weight);

    /*!
    * @brief Gets the edge source id.
    * Time Complexity: O(1).
    * @return identifier.
    */
    int getSource() const;

    /*!
    * @brief Gets the edge dest id.
    * Time Complexity: O(1).
    * @return identifier.
    */
    int getDest() const;

    /*!
    * @brief Gets the edge weight id.
    * Time Complexity: O(1).
    * @return weight.
    */
    double getWeight() const;

    /*!
    * @brief Checks if edge is selected.
    * Time Complexity: O(1).
    * @return true if selected, false otherwise..
    */
    bool isSelected() const;

    /*!
    * @brief Sets selected to new value.
    * Time Complexity: O(1).
    * @param selected bool representing new value.
    */
    void setSelected(bool selected);

    /*!
    * @brief Sets weight to new value.
    * Time Complexity: O(1).
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
