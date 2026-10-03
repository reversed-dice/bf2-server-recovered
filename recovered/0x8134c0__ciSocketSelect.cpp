// FUNCTION: BF2 0x8134c0
namespace dice { namespace hfe { namespace io {
extern void func_0x0083f0d0(void*, void*, void*, void*);  // GSISocketSelect
void ciSocketSelect_0x8134c0(void* p1, void* p2, void* p3, void* p4) {
    int local_1c = 0;
    int local_20 = 0;
    int local_24 = 0;
    func_0x0083f0d0(p1, &local_1c, &local_20, &local_24);
    if (p2 != 0) *(int*)p2 = local_1c;
    if (p3 != 0) *(int*)p3 = local_20;
    if (p4 != 0) *(int*)p4 = local_24;
}
} } }
// REVERSED_FUNCTION: ciSocketSelect (0x8134c0)
