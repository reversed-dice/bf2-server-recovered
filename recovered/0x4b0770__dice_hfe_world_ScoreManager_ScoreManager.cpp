// FUNCTION: BF2 0x4b0770
// BF2_COMPILER: 3.4

extern "C" {
void _ZN4dice3hfe2io15NetworkableBaseC2Ev(void*);
void _ZN4dice3hfe5world9TeamScoreC1Ev(void*);
}

namespace dice { namespace hfe { namespace world {

extern "C" void ScoreManager_ctor_4b0770(void* self) {
    long n = 2;
    *(void**)self = (void*)0xb362d0;
    _ZN4dice3hfe2io15NetworkableBaseC2Ev((char*)self + 8);
    float f100 = 100.0f;
    *(void**)self = (void*)0xb36030;
    *(void**)((char*)self + 8) = (void*)0xb36230;
    *(int*)((char*)self + 0x58) = 1;
    *(int*)((char*)self + 0x5c) = 0;
    *(int*)((char*)self + 0x60) = 2;
    *(int*)((char*)self + 0x64) = 1;
    *(int*)((char*)self + 0x68) = 1;
    *(int*)((char*)self + 0x6c) = -4;
    *(int*)((char*)self + 0x70) = 1;
    *(int*)((char*)self + 0x74) = 2;
    *(int*)((char*)self + 0x78) = 1;
    *(int*)((char*)self + 0x7c) = 2;
    *(int*)((char*)self + 0x80) = 1;
    *(int*)((char*)self + 0x84) = 5;
    *(int*)((char*)self + 0x88) = 2;
    *(int*)((char*)self + 0x8c) = 4;
    *(int*)((char*)self + 0x90) = 5;
    *(int*)((char*)self + 0x94) = 1;
    *(int*)((char*)self + 0x98) = -2;
    *(int*)((char*)self + 0x9c) = -1;
    *(float*)((char*)self + 0xa0) = f100;
    *(float*)((char*)self + 0xa4) = f100;
    *(float*)((char*)self + 0xa8) = f100;
    *(int*)((char*)self + 0xac) = 0x42480000;
    *(int*)((char*)self + 0xb0) = 0x41c80000;
    *(char*)((char*)self + 0xb4) = 0;
    *(char*)((char*)self + 0xb5) = 4;
    char* t = (char*)self + 0xb8;
    do {
        _ZN4dice3hfe5world9TeamScoreC1Ev(t);
        t += 0x94;
        --n;
    } while (n != 0);
    *(void**)((char*)self + 0x1e0) = 0;
    *(int*)((char*)self + 0xb8) = 1;
    *(int*)((char*)self + 0x14c) = 2;
}

} } }
