// FUNCTION: BF2 0x69a0f0
namespace dice { namespace hfe { namespace world {
typedef unsigned int (*vfn_20)(void*);
typedef void* (*vfn_1e0)(void*);
bool getChildIndexOfType(void* root, void* target, unsigned int id, int* count)
{
    if (root == target)
        return true;
    for (void* child = (*(vfn_1e0*)((char*)*(void**)root + 0x1e0))(root);
         child != 0; child = *(void**)((char*)child + 0x58)) {
        void* obj = *(void**)((char*)child + 0x28);
        if ((*(vfn_20*)((char*)*(void**)obj + 0x20))(obj) == id) {
            ++(*count);
            if (getChildIndexOfType(child, target, id, count))
                return true;
        }
    }
    return false;
}
} } }
