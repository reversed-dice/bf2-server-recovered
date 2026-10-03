// FUNCTION: BF2 0x78e570
namespace dice { namespace hfe {
struct V { char pad[0x70]; long long* begin; long long* end; };
bool f_78e570(void* self) {
    V* v = (V*)self;
    return v->end - v->begin != 0;
}
} }
