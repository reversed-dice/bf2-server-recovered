// FUNCTION: BF2 0x591a40
// EditableDecal::handleUpdate 0x591a40
namespace dice { namespace hfe { namespace world {

extern "C" {
    extern float DAT_00b2f3bc;
}

struct EditableDecal {
    void* vtable;           // 0x00
    char pad_08[0x20];      // 0x08-0x27
    void* field_28;         // 0x28
    char pad_30[0x1E8];     // 0x30-0x217
    void* field_218;        // 0x218
};

void handleUpdate(EditableDecal* self, float dt, unsigned int flags) {
    if (self->field_218 == 0) return;
    
    // Check: vtable[0x48](self->field_218) == 0?
    long* vtbl = (long*)(*(long*)self->field_218);
    typedef int (*CheckFn)(void*);
    CheckFn check = (CheckFn)(*(long*)((char*)vtbl + 0x48));
    if (check(self->field_218) != 0) return;
    
    // Save vtable[0x38] for tail call
    long* f218_vtbl = (long*)(*(long*)self->field_218);
    typedef void (*DispatchFn)(void*, long, long, float, int, int);
    DispatchFn dispatch = (DispatchFn)(*(long*)((char*)f218_vtbl + 0x38));
    
    // Get field_28->field_70
    void* field28 = self->field_28;
    long field_70 = *(long*)((char*)field28 + 0x70);
    
    // Call this->vtable[0x120](this)
    long* self_vtbl = (long*)(*(long*)self);
    typedef long (*GetRetFn)(EditableDecal*);
    GetRetFn getRet = (GetRetFn)(*(long*)((char*)self_vtbl + 0x120));
    long ret = getRet(self);
    
    // Tail call: dispatch(field_218, ret, field_70, DAT_00b2f3bc, 0, 0)
    dispatch(self->field_218, ret, field_70, DAT_00b2f3bc, 0, 0);
}

} } }
