// FUNCTION: BF2 0x59c160
// EditableEnvMapObject::handleUpdate 0x59c160
namespace dice { namespace hfe { namespace world {

extern "C" {
    extern float DAT_00b2f3bc;
}

struct EditableEnvMapObject {
    void* vtable;           // 0x00
    char pad_08[0x20];      // 0x08-0x27
    void* field_28;         // 0x28
    char pad_30[0x200];     // 0x30-0x22F
    void* field_230;        // 0x230
};

void handleUpdate(EditableEnvMapObject* self, float dt, unsigned int flags) {
    if (self->field_230 == 0) return;
    
    // Check: vtable[0x20](self->field_230) != 0?
    long* vtbl = (long*)(*(long*)self->field_230);
    typedef int (*CheckFn)(void*);
    CheckFn check = (CheckFn)(*(long*)((char*)vtbl + 0x20));
    if (check(self->field_230) == 0) return;
    
    // Save vtable[0x10] for tail call
    long* f230_vtbl = (long*)(*(long*)self->field_230);
    typedef void (*DispatchFn)(void*, long, long, float);
    DispatchFn dispatch = (DispatchFn)(*(long*)((char*)f230_vtbl + 0x10));
    
    // Get field_28->field_1D0
    void* field28 = self->field_28;
    long field_1D0 = *(long*)((char*)field28 + 0x1D0);
    
    // Call this->vtable[0x108](this)
    long* self_vtbl = (long*)(*(long*)self);
    typedef long (*GetRetFn)(EditableEnvMapObject*);
    GetRetFn getRet = (GetRetFn)(*(long*)((char*)self_vtbl + 0x108));
    long ret = getRet(self);
    
    // Tail call: dispatch(field_230, ret, field_1D0, DAT_00b2f3bc)
    dispatch(self->field_230, ret, field_1D0, DAT_00b2f3bc);
}

} } }
