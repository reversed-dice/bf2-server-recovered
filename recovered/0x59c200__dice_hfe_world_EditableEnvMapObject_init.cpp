// BF2_FLAGS: -fno-reorder-blocks
// FUNCTION: BF2 0x59c200
namespace dice { namespace hfe { namespace world {

struct Object { void init(); };

struct EditableEnvMapObject {
    void* vtable;          // 0x00
    char pad_08[0x20];     // 0x08
    void* field_28;        // 0x28
    char pad_30[0x200];    // 0x30
    void* field_230;       // 0x230
};

extern "C" { extern float DAT_00b2f3bc; }
typedef void (*Fnv2)(void*, long, long, float);
typedef long (*Fnv33)(void*);

void init(EditableEnvMapObject* self) {
    ((Object*)self)->init();
    if (self->field_230 == 0) return;
    Fnv2 fn = (Fnv2)(*(void***)self->field_230)[2];
    long field = *(long*)((char*)self->field_28 + 0x1d0);
    long ret = ((Fnv33)(*(void***)self)[0x21])(self);
    fn(self->field_230, ret, field, DAT_00b2f3bc);
}

} } }
