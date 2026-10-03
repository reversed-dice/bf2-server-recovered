// FUNCTION: BF2 0x993010
namespace dice { namespace hfe {
// 0x993010 operator>> (istream, Vec3&)
extern "C" void* fn_408508(void*, void*);   // istream >> float
extern "C" void* fn_408348(void*, void*);   // istream >> char
void* operator_sh_0x993010(void* is, void* out) {
    float f;
    char c;
    void* r = fn_408508(is, &f);
    r = fn_408348(r, &c);
    *(int*)out = *(int*)&f;
    r = fn_408508(is, &f);
    r = fn_408348(r, &c);
    *(int*)((char*)out + 4) = *(int*)&f;
    r = fn_408508(is, &f);
    *(int*)((char*)out + 8) = *(int*)&f;
    return is;
}
} }
