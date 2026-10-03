// FUNCTION: BF2 0x55d340
namespace dice { namespace hfe { namespace world {

extern "C" void dice_hfe_world_Object_destroy_bool(void* self, bool flag);

class SupplyObject {
public:
    void destroy(bool flag);
};

void SupplyObject::destroy(bool flag)
{
    void* m = *(void**)0x0112ee48;
    ((void (*)(void*, void*))(*(void***)m)[0x1a8 / 8])(m, this);
    dice_hfe_world_Object_destroy_bool(this, flag);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SupplyObject_destroy_bool (0x55d340)
