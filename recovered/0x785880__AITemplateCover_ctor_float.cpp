// FUNCTION: BF2 0x785880
struct AITemplateCover {
    void* vt; void* p8; float f10; float f14; char b18; char pad[3]; float f1c; void* p20; int i28; char pad2[4]; void* p30;
};
void ctor(AITemplateCover* p, float f) {
    p->vt = (void*)0xba3ef0;
    p->p8 = 0;
    p->f10 = f;
    p->f14 = 0.0f;
    p->b18 = 0;
    p->f1c = 0.0f;
    p->p20 = 0;
    p->i28 = 0;
    p->p30 = 0;
}
