// FUNCTION: BF2 0x7ec010
namespace dice { namespace hfe { namespace io {
extern bool fn_7ebec0(void* s, int a, int b, int c, int d, int e, float f);
bool addTriggerMapping_0x7ec010(void* self, int p1, int p2, int p3, int p4, unsigned char p5, float f1, float f2) {
    bool r1 = true;
    if (p1 != -1) r1 = fn_7ebec0(self, 1, p1, p3, p4, p5, f1);
    bool r2 = true;
    if (p2 != -1) r2 = fn_7ebec0(self, 2, p2, p3, p4, p5, f2);
    return r1 && r2;
}
} } }
