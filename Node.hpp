//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.
//  Modified by Tiziana Ligorio for CSCI 235 Hunter College 2018

/** @file Node.h
 Listing 4-1 */
#ifndef NODE_
#define NODE_

template<class ItemType>
class Node
{
    
public:
    Node();
    Node(const ItemType& an_item);
    Node(const ItemType& an_item, Node<ItemType>* next_node_ptr);
    void setItem(const ItemType& an_item);
    void setNext(Node<ItemType>* next_node_ptr);
    void setPrevious(Node<ItemType>* previous_node_ptr);
    ItemType getItem() const ;
    Node<ItemType>* getNext() const ;
    Node<ItemType>* getPrevious() const ;
    
private:
    ItemType        item_; // A data item
    Node<ItemType>* next_; // Pointer to next node
    Node<ItemType>* previous_; // Pointer to next node
}; // end Node

#include "Node.cpp"
#endif

