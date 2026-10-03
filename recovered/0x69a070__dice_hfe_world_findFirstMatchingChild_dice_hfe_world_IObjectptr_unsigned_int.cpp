// FUNCTION: BF2 0x69a070
// findFirstMatchingChild 0x69a070
// Recursively searches child objects for one matching a given ID
extern "C" {
    // Recursive call to self
}

typedef void* (*FnGetChild)(void*);
typedef unsigned (*FnGetId)(void*);

void* findFirstMatchingChild(void* obj, unsigned targetId) {
    if (obj == 0) return 0;
    
    // Get first child via vtable[0x1e0]
    FnGetChild getChild = (FnGetChild)(*(void**)((char*)*(void**)obj + 0x1e0));
    void* child = getChild(obj);
    
    while (child != 0) {
        // Check if this child matches
        FnGetId getId = (FnGetId)(*(void**)((char*)*(void**)child + 0x20));
        unsigned id = getId(child);
        if (id == targetId) {
            return child;
        }
        
        // Recurse into child's subtree
        void* found = findFirstMatchingChild(child, targetId);
        if (found != 0) {
            return found;
        }
        
        // Move to next sibling
        child = *(void**)((char*)child + 0x58);
    }
    
    return 0;
}
