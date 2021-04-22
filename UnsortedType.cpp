/*
 Create class called unsorted type.
 
 Skills used: inheritence, contructors, private data memebers, getters and reference variables 
 */
#include "ItemType.h"

#include <iostream>

class UnsortedType
{
public:
    UnsortedType();
    void MakeEmpty();
    bool IsFull() const;
    int GetLength() const;
    ItemType GetItem(ItemType item, bool& found);
    void PutItem(ItemType item);
    void DeleteItem(ItemType item);
    void ResetList();
    ItemType GetNextItem();
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

ItemType UnsortedType::GetItem(ItemType item, bool& found)
// Pre:  Key member(s) of item is initialized.
// Post: If found, item's key matches an element's key in the
//       list and a copy of that element is returned;
//       otherwise, item is returned.
{
    
    bool moreToSearch;
    int location = 0;
    found = false;
    
    moreToSearch = (location < length);
    
    while (moreToSearch && !found)
        
    {
        
        switch (item.ComparedTo(info[location]))
        {
                
            case LESS    :
            case GREATER : location++;
                moreToSearch = (location < length);
                break;
            case EQUAL   : found = true;
                item = info[location];
                break;
        }
    }
    return item;
}
