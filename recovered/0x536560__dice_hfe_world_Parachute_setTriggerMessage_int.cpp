// FUNCTION: BF2 0x536560
namespace dice { namespace hfe {
void set_536560(void* self, int v) {
    int old = *(int*)((char*)self + 0x604);
    *(int*)((char*)self + 0x604) = v;
    *(int*)((char*)self + 0x608) = old;
}
} }
