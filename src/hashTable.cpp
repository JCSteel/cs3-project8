#include "hashTable.h"
#include <string>

hashTable::hashTable()
{

}

hashTable::~hashTable()
{
    //dtor
}

hashTable::hashNum(string key) {
    int hash = 0;
    int index;

    for (int i = 0; i < key.length(); i++) {
        hash = hash + (int)key[i];
    }
    index = hash % 30;
    return index;
}
