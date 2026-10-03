// FUNCTION: BF2 0x4e04a0
namespace dice { namespace hfe {
struct S3 { long a, b, c; };
void cb_4e04a0(void* self) {
    *(char*)((char*)self + 0x0) = 1;
    *(int*)((char*)self + 0x4) = 0;
    *(int*)((char*)self + 0x8) = 0;
    S3* p1 = (S3*)((char*)self + 0x10);
    p1->a = 0;
    p1->b = 0;
    p1->c = 0;
    S3* p2 = (S3*)((char*)self + 0x28);
    p2->a = 0;
    p2->b = 0;
    p2->c = 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_BF2FrameInterpolator_BF2FrameInterpolator (0x4e04a0)
