// FUNCTION: BF2 0x524150
namespace dice { namespace hfe { namespace world {

extern "C" void ItemTemplate_base_ctor(void*);

void fn_0x524150(void* self) {
    ItemTemplate_base_ctor(self);
    *(long*)self = 0xb43b70;
    *(long*)((char*)self + 0x10) = 0xb43e50;
    *(long*)((char*)self + 0x68) = 0xb43e88;
    *(long*)((char*)self + 0x1c8) = 0xb43f08;
    *(long*)((char*)self + 0x1f8) = 0xb43f70;
    *(int*)((char*)self + 0x200) = 1;
    *(int*)((char*)self + 0x204) = -1;
    *(int*)((char*)self + 0x208) = -1;
    *(int*)((char*)self + 0x20c) = -1;
    *(int*)((char*)self + 0x210) = 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ItemTemplate_ItemTemplate (0x524150)
