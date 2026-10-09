// FUNCTION: BF2 0x8fff30
namespace dice { namespace hfe { namespace world {
extern int CID_PlayerControlObjectTemplate;
extern void* getActiveTemplate(unsigned int);
struct PCT { char pad[0x3c4]; float mField; };
void* cb(void* p) {
    int m = *(int*)((char*)p + 0x30);
    if (m == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = getActiveTemplate(CID_PlayerControlObjectTemplate);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)t + 0x3c4);
        return (char*)p + 0x10c;
    }
    if (m == 1) {
        float f = **(float**)((char*)p + 0x38);
        *(char*)((char*)p + 0x108) = 0;
        void* t = getActiveTemplate(CID_PlayerControlObjectTemplate);
        ((PCT*)t)->mField = f < 0.0f ? 0.0f : (f > 1.0f ? 1.0f : f);
    }
    return 0;
}
} } }
