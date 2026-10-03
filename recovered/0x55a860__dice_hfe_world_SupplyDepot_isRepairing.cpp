// FUNCTION: BF2 0x55a860
namespace dice { namespace hfe {
struct N { char pad[0x2c8]; int* begin; int* end; };
bool f_55a860(void* self) {
    N* node = *(N**)((char*)self + 0x230);
    return node->end - node->begin != 0;
}
} }
