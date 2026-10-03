// FUNCTION: BF2 0x6a0c00
// dice::hfe::world::ObjectTemplateManager::getObjectOfIIDAndInputId(IObject*, unsigned, int) const -- 0x6a0c00
//
// Returns the object itself when it answers the interface query and its input
// id matches, otherwise recurses (through the virtual at +0x98) over the child
// chain linked at +0x58.

typedef void* (*Fn18)(void*, unsigned);
typedef char  (*Fn210)(void*);
typedef void* (*Fn1e0)(void*);
typedef void* (*Fn98)(void*, void*, unsigned, int);

void* getObjectOfIIDAndInputId_6a0c00(void* self, void* obj, unsigned iid, int inputId)
{
    if (obj != 0) {
        if ((*(Fn18*)(*(char**)obj + 0x18))(obj, iid) != 0 &&
            inputId == (*(Fn210*)(*(char**)obj + 0x210))(obj))
            return obj;

        for (void* child = (*(Fn1e0*)(*(char**)obj + 0x1e0))(obj); child != 0;
             child = *(void**)((char*)child + 0x58)) {
            void* found = (*(Fn98*)(*(char**)self + 0x98))(self, child, iid, inputId);
            if (found != 0) return found;
        }
    }
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplateManager_getObjectOfIIDAndInputId_dice_hfe_world_IObjectptr_unsigned_int_int_const (0x6a0c00)
