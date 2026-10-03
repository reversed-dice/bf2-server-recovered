// FUNCTION: BF2 0x5f4140
// 0x5f40d0 - ExplosivesFireCompTemplate constructor - match alternating pattern
extern "C" void fn_5f5e40(void*);
void fn_0x5f40d0(void* self) {
    fn_5f5e40(self);
    *(void**)self = (void*)0xb72df0;
    *(void**)((char*)self + 0x8) = (void*)0xb72e78;
    *(int*)((char*)self + 0x8c) = 1;
    *(float*)((char*)self + 0x90) = 0.0f;
    *(int*)((char*)self + 0x94) = 0;
    *(float*)((char*)self + 0x98) = 0.0f;
    *(int*)((char*)self + 0x9c) = 0;
    *(float*)((char*)self + 0xa0) = 0.0f;
    *(int*)((char*)self + 0xa4) = 0;
    *(void**)((char*)self + 0xa8) = (void*)0xf6c6e8;
}
