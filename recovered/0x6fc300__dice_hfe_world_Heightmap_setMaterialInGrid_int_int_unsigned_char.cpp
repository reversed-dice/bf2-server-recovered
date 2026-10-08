// FUNCTION: BF2 0x6fc300
namespace dice { namespace hfe { namespace world {
void setMaterialInGrid_0x6fc300(void* self, int x, int y, unsigned char mat)
{
    char* p = (char*)self;
    char* grid = *(char**)(p + 0xd0);
    if (grid == 0)
        return;
    unsigned int w = *(unsigned int*)(p + 0xcc);
    unsigned int h = *(unsigned int*)(p + 0x28);
    unsigned int a = (unsigned int)x + *(unsigned int*)(p + 0x34);
    unsigned int b = (unsigned int)y + *(unsigned int*)(p + 0x38);
    unsigned long idx = a * w + b * w * (w * h);
    *(char*)(grid + idx) = (char)mat;
}
} } }
