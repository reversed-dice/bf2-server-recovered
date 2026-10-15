// FUNCTION: BF2 0x63e370
namespace dice { namespace hfe {

class Frustum {
public:
    Frustum& operator=(Frustum const&);
    char m_data[0x1e8];
};

} }

namespace dice { namespace hfe { namespace world {

class LightSource {
public:
    void copySettings(LightSource const& o);
};

void LightSource::copySettings(LightSource const& o) {
    unsigned char* d = (unsigned char*)this;
    const unsigned char* s = (const unsigned char*)&o;

    { const unsigned* ss = (const unsigned*)(const void*)(s + 0x220); unsigned* dd = (unsigned*)(void*)(d + 0x220);
      unsigned z = ss[2], y = ss[1], x = ss[0]; dd[0] = x; dd[1] = y; dd[2] = z; }
    { const unsigned* ss = (const unsigned*)(const void*)(s + 0x22c); unsigned* dd = (unsigned*)(void*)(d + 0x22c);
      unsigned z = ss[2], y = ss[1], x = ss[0]; dd[0] = x; dd[1] = y; dd[2] = z; }
    *(unsigned*)(void*)(d + 0x238) = *(unsigned const*)(const void*)(s + 0x238);
    *(unsigned*)(void*)(d + 0x23c) = *(unsigned const*)(const void*)(s + 0x23c);
    { const unsigned* ss = (const unsigned*)(const void*)(s + 0x240); unsigned* dd = (unsigned*)(void*)(d + 0x240);
      unsigned z = ss[2], y = ss[1], x = ss[0]; dd[0] = x; dd[1] = y; dd[2] = z; }
    { const unsigned* ss = (const unsigned*)(const void*)(s + 0x24c); unsigned* dd = (unsigned*)(void*)(d + 0x24c);
      unsigned z = ss[2], y = ss[1], x = ss[0]; dd[0] = x; dd[1] = y; dd[2] = z; }
    *(unsigned*)(void*)(d + 0x258) = *(unsigned const*)(const void*)(s + 0x258);
    *(unsigned*)(void*)(d + 0x25c) = *(unsigned const*)(const void*)(s + 0x25c);
    *(unsigned*)(void*)(d + 0x260) = *(unsigned const*)(const void*)(s + 0x260);
    *(unsigned*)(void*)(d + 0x264) = *(unsigned const*)(const void*)(s + 0x264);
    *(unsigned*)(void*)(d + 0x268) = *(unsigned const*)(const void*)(s + 0x268);
    *(char*)(void*)(d + 0x26c) = *(char const*)(const void*)(s + 0x26c);
    *(unsigned*)(void*)(d + 0x270) = *(unsigned const*)(const void*)(s + 0x270);
    *(unsigned*)(void*)(d + 0x274) = *(unsigned const*)(const void*)(s + 0x274);
    { const unsigned* ss = (const unsigned*)(const void*)(s + 0x278); unsigned* dd = (unsigned*)(void*)(d + 0x278);
      unsigned z = ss[2], y = ss[1], x = ss[0]; dd[0] = x; dd[1] = y; dd[2] = z; }
    *(unsigned*)(void*)(d + 0x284) = *(unsigned const*)(const void*)(s + 0x284);

    *(Frustum*)(void*)(d + 0x288) = *(Frustum const*)(const void*)(s + 0x288);
}

} } }
