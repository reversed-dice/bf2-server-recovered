// FUNCTION: BF2 0x7a4cb0
namespace dice { namespace hfe { namespace io {
extern void fn_7a5540(void* a, void* b);
extern void fn_4e52b0(void* a, void* b);
extern void fn_7479e0(void* a, void* b);
extern void fn_67c690(void* a, void* b);
extern void fn_7473b0(void* a, void* b);
extern void fn_746c40(void* a, void* b);
extern void fn_7468e0(void* a, void* b);
extern void fn_4c9950(void* a, void* b);
extern void fn_4085b8(void* a);
void shutdownSettingsManager_0x7a4cb0() {
    void* p = *(void**)0x10ae0e0;
    if (!p)
        return;
    void* q270 = (char*)p + 0x270;
    fn_7a5540(q270, *(void**)((char*)q270 + 0x10));
    void* q240 = (char*)p + 0x240;
    fn_4e52b0(q240, *(void**)((char*)q240 + 0x10));
    void* q210 = (char*)p + 0x210;
    fn_7479e0(q210, *(void**)((char*)q210 + 0x10));
    void* q1e0 = (char*)p + 0x1e0;
    fn_4e52b0(q1e0, *(void**)((char*)q1e0 + 0x10));
    void* q1b0 = (char*)p + 0x1b0;
    fn_67c690(q1b0, *(void**)((char*)q1b0 + 0x10));
    void* q180 = (char*)p + 0x180;
    fn_4e52b0(q180, *(void**)((char*)q180 + 0x10));
    void* q150 = (char*)p + 0x150;
    fn_7473b0(q150, *(void**)((char*)q150 + 0x10));
    void* q120 = (char*)p + 0x120;
    fn_4e52b0(q120, *(void**)((char*)q120 + 0x10));
    void* qf0 = (char*)p + 0xf0;
    fn_746c40(qf0, *(void**)((char*)qf0 + 0x10));
    void* qc0 = (char*)p + 0xc0;
    fn_4e52b0(qc0, *(void**)((char*)qc0 + 0x10));
    void* q90 = (char*)p + 0x90;
    fn_7468e0(q90, *(void**)((char*)q90 + 0x10));
    void* q60 = (char*)p + 0x60;
    fn_4e52b0(q60, *(void**)((char*)q60 + 0x10));
    void* q30 = (char*)p + 0x30;
    fn_4c9950(q30, *(void**)((char*)q30 + 0x10));
    fn_4e52b0(p, *(void**)((char*)p + 0x10));
    fn_4085b8(*(void**)0x10ae0e0);
}
} } }
