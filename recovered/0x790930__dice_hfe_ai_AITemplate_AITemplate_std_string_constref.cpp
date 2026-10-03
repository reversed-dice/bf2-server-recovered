// FUNCTION: BF2 0x790930
// 0x790930 - AITemplate constructor
extern "C" void _ZNSsC1ERKSs(void*, void*);

void fn_0x790930(void* self, void* str) {
    *(void**)self = 0;
    *(int*)((char*)self + 0x8) = 0;
    *(int*)((char*)self + 0xc) = 0;
    *(float*)((char*)self + 0x10) = 0.0f;
    *(float*)((char*)self + 0x14) = 0.0f;
    *(float*)((char*)self + 0x18) = 0.0f;
    *(char*)((char*)self + 0x1c) = 0;
    *(char*)((char*)self + 0x1d) = 0;
    *(char*)((char*)self + 0x1e) = 0;
    _ZNSsC1ERKSs((char*)self + 0x20, str);
    *(void**)((char*)self + 0x28) = 0;
}
