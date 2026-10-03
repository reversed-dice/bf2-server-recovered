// FUNCTION: BF2 0x6d4d30
namespace maya {

void fn_0x6d4d30(void* self, void* src) {
    *(long*)self = *(long*)src;
    *(long*)((char*)self+8) = *(long*)((char*)src+8);
    *(long*)((char*)self+0x10) = *(long*)((char*)src+0x10);
}

}
// REVERSED_FUNCTION: maya_AwVector_AwVector_maya_AwPoint_constref (0x6d4d30)
