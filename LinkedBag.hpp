//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.
//  Modified by Tiziana Ligorio 2019 for CSCI 235 Hunter College

/** ADT bag: Link-based implementation.
 @file LinkedBag.h
 Listing 4-3 */
#ifndef LINKED_BAG_
#define LINKED_BAG_

#include <vector>
#include <cstdlib>
#include <algorithm>
#include "Node.hpp"

template<class T>
class LinkedBag
{
public:
    LinkedBag();
    LinkedBag(const LinkedBag<T>& a_bag); // Copy constructor
    ~LinkedBag();                       // Destructor
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const T& new_entry);
    bool remove(const T& an_entry);
    void clear();
    bool contains(const T& an_entry) const;
    int getFrequencyOf(const T& an_entry) const;
    LinkedBag<T> bagUnion(const LinkedBag<T>& a_bag) const;
    LinkedBag<T> bagIntersectionNoDuplicates(const LinkedBag<T>& a_bag) const;
    LinkedBag<T> bagDifference(const LinkedBag<T>& a_bag) const;
    void operator= (const LinkedBag<T>& a_bag);
    bool addToEnd(const T& new_entry);
    std::vector<T> toVector() const;
    
    
private:
    Node<T>* head_ptr_;     // Pointer to first node
    int item_count_;           // Current count of bag items
    
    /**
     @return Returns either a pointer to the node containing a given entry
     or the null pointer if the entry is not in the bag.
     */
    Node<T>* getPointerTo(const T& target) const;
    
    
}; // end LinkedBag

#include "LinkedBag.cpp"
#endif

