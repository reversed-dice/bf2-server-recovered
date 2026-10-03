// FUNCTION: BF2 0x6a7110
// ObjectTemplateAdm::setActiveObject 0x6a7110 — tail-call avec arg 0
namespace dice { namespace hfe { namespace tool {

extern void set_active(void* self, void* obj, int a);

void setActiveObject(void* self, void* obj) {
    set_active(self, obj, 0);
}

}}}
