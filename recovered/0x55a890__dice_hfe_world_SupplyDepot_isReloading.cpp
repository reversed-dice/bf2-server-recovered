// FUNCTION: BF2 0x55a890
namespace dice { namespace hfe {
struct N { char pad[0x220]; int* begin; int* end; };
bool f_55a890(void* self) {
    N* node = *(N**)((char*)self + 0x230);
    return node->end - node->begin != 0;
}
} }
