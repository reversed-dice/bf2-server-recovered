// FUNCTION: BF2 0x7edc20
namespace dice { namespace hfe { namespace io {
extern bool fn_7edab0(void* a, int b, int c, int d, int e, int f, int g);
bool addAxisMapping_0x7edc20(void* self, int p1, int p2, int p3, int p4, unsigned char p5, unsigned char p6, unsigned char p7) {
    bool r1 = fn_7edab0(self, p1, p3, p4, 1, p7, 0);
    bool r2 = fn_7edab0(self, p2, p3, p4, 0, p7, 0);
    return r1 && r2;
}
} } }
