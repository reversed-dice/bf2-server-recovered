// FUNCTION: BF2 0x6431d0
namespace dice { namespace hfe {
struct S3 { long a, b, c; };
void cb_6431d0(void* self) {
    *(void**)((char*)self + 0x0) = (void*)0xb87f90;
    *(void**)((char*)self + 0x8) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x10) = (void*)0xf6c6e8;
    S3* p1 = (S3*)((char*)self + 0x18);
    p1->a = 0;
    p1->b = 0;
    p1->c = 0;
    S3* p2 = (S3*)((char*)self + 0x30);
    p2->a = 0;
    p2->b = 0;
    p2->c = 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_XMLNode_XMLNode (0x6431d0)
