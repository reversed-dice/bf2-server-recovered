// FUNCTION: BF2 0x69a1b0
// setBoundRadiusIsDirty 0x69a1b0
namespace dice { namespace hfe { namespace world {

extern void* g_objectManager;

typedef void (*fn140_t)(void*, void*);

struct IObject {
    void* vtable;     // 0x00
    unsigned int flags; // 0x08
    char pad[0x44];   // 0x0C-0x4F
    IObject* next;    // 0x50
};

void setBoundRadiusIsDirty(void* obj) {
    IObject* last = (IObject*)obj;
    IObject* current = last;
    do {
        last = current;
        current->flags |= 0x20140000;
        current = current->next;
    } while (current != 0);
    
    ((fn140_t)*(void**)((char*)*(void**)g_objectManager + 0x140))(g_objectManager, last);
}

} } }
