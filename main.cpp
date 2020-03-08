//Maisa Ahmad

#include <stdio.h>
#include <iostream>
#include "LinkedBag.hpp"

int main () {
    
    LinkedBag<int> BagPtr;//created a linkedbag
    for (int j=1; j<12; j++) {
        BagPtr.add(j);//add numbers 1 through 11 in bag
    }
    BagPtr.add(7);

    BagPtr.remove(5);//remove will find element 3 and remove it
    
    std::vector<int> arr = BagPtr.toVector();
    for (int i=0; i<arr.size(); i++) {
        std::cout << arr[i] <<" ";
    }
    std::cout<<"\n";
    
    
}
