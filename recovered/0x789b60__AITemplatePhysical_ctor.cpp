// FUNCTION: BF2 0x789b60
struct AITemplatePhysical {
    void* vt; float f8; float fc; float f10; float f14; float f18; int i1c; char b20; char b21;
};
void ctor(AITemplatePhysical* p) {
    p->vt = (void*)0xba4a90;
    p->i1c = 0;
    p->f8 = 0.0f; p->fc = 0.0f; p->f10 = 0.0f; p->f14 = 0.0f; p->f18 = 0.0f;
    p->b20 = 0; p->b21 = 0;
}
