//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.
//  Modified by Tiziana Ligorio for CSCI 235 Hunter College 2018

/** @file Node.cpp
    Listing 4-2 */
#include "Node.hpp"
//#include <cstddef>

template<class ItemType>
Node<ItemType>::Node() : next_(nullptr)
{
} // end default constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& an_item) : item_(an_item), next_(nullptr)
{
} // end constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& an_item, Node<ItemType>* next_node_ptr) :
                item_(an_item), next_(next_node_ptr)
{
} // end constructor

template<class ItemType>
void Node<ItemType>::setItem(const ItemType& an_item)
{
   item_ = an_item;
} // end setItem

template<class ItemType>
void Node<ItemType>::setNext(Node<ItemType>* next_node_ptr)
{
   next_ = next_node_ptr;
} // end setNext

template<class ItemType>
void Node<ItemType>::setPrevious(Node<ItemType>* previous_node_ptr)
{
    previous_ = previous_node_ptr;
} // end setPrevious

template<class ItemType>
ItemType Node<ItemType>::getItem() const
{
   return item_;
} // end getItem

template<class ItemType>
Node<ItemType>* Node<ItemType>::getNext() const
{
   return next_;
} // end getNext


template<class ItemType>
Node<ItemType>* Node<ItemType>::getPrevious() const
{
    return previous_;
} // end getPrevious