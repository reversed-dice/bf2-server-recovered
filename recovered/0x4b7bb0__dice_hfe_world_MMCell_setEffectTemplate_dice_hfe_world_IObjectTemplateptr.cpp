// FUNCTION: BF2 0x4b7bb0
// MMCell::setEffectTemplate 0x4b7bb0 — virtual [0x28]
namespace dice { namespace hfe { namespace world {

typedef void (*VF_SETTMPL)(void*, int, void*);

void setEffectTemplate(void* self, void* tmpl) {
    VF_SETTMPL f = (VF_SETTMPL)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x28));
    f(self, 0, tmpl);
}

}}}
