// FUNCTION: BF2 0x765970
namespace dice { namespace hfe {
// 0x765970 operator>> (istream, SoundEnvelopePoint&)
extern "C" void* fn_408508(void*, void*);   // istream >> float
extern "C" void* fn_408348(void*, void*);   // istream >> char
void* operator_sh_0x765970(void* is, void* out) {
    char c;
    fn_408508(is, out);
    fn_408348(is, &c);
    fn_408508(is, (char*)out + 4);
    fn_408348(is, &c);
    fn_408508(is, (char*)out + 8);
    fn_408348(is, &c);
    return is;
}
} }
