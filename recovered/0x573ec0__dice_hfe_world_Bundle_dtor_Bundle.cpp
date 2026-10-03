// FUNCTION: BF2 0x573ec0
namespace dice::hfe::world {

struct Bundle {
    void* vptr;              // 0x000
    char pad[0xF8];          // 0x008 .. 0x0FF
    void* subobj_vptr;       // 0x100
};

void SimpleObject_dtor_SimpleObject(Bundle* self);

void Bundle_dtor_Bundle(Bundle* self)
{
    self->vptr = reinterpret_cast<void*>(0xb567d0);
    self->subobj_vptr = reinterpret_cast<void*>(0xb56ae0);
    SimpleObject_dtor_SimpleObject(self);
}

} // namespace dice::hfe::world
// REVERSED_FUNCTION: dice::hfe::world::Bundle_dtor_Bundle (0x00573ec0)
