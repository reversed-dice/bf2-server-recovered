// FUNCTION: BF2 0x4b7bd0
// MMCell::setSoundTemplate 0x4b7bd0 — virtual [0x58]
namespace dice { namespace hfe { namespace world {

typedef void (*VF_SETTMPL)(void*, int, void*);

void setSoundTemplate(void* self, void* tmpl) {
    VF_SETTMPL f = (VF_SETTMPL)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x58));
    f(self, 0, tmpl);
}

}}}
