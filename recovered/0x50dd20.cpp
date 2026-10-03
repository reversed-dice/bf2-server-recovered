extern "C" void merge_50dd20(void* self, void* src)
{
    if (*(float*)src > *(float*)((char*)self + 0xc)) *(float*)((char*)self + 0xc) = *(float*)src;
    if (*(float*)src < *(float*)((char*)self + 0x0)) *(float*)((char*)self + 0x0) = *(float*)src;
    if (*(float*)((char*)src + 0x4) > *(float*)((char*)self + 0x10)) *(float*)((char*)self + 0x10) = *(float*)((char*)src + 0x4);
    if (*(float*)((char*)src + 0x4) < *(float*)((char*)self + 0x4)) *(float*)((char*)self + 0x4) = *(float*)((char*)src + 0x4);
    if (*(float*)((char*)src + 0x8) > *(float*)((char*)self + 0x14)) *(float*)((char*)self + 0x14) = *(float*)((char*)src + 0x8);
    if (*(float*)((char*)src + 0x8) < *(float*)((char*)self + 0x8)) *(float*)((char*)self + 0x8) = *(float*)((char*)src + 0x8);
    *(char*)((char*)self + 0x20) = 1;
}
