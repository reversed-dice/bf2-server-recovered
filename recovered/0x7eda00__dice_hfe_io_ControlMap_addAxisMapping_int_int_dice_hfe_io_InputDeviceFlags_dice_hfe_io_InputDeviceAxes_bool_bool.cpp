// FUNCTION: BF2 0x7eda00
namespace dice { namespace hfe { namespace io {
extern bool fn_7ed840(void* a, int b, int c, int d, int e, int f, int g);
bool addAxisMapping_0x7eda00(void* self, int p1, int p2, int p3, int p4, unsigned char p5, unsigned char p6) {
    bool r1 = fn_7ed840(self, 1, p1, p3, p4, p5, p6);
    bool r2 = fn_7ed840(self, 2, p2, p3, p4, p5, p6);
    return r1 && r2;
}
} } }
