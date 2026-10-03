// FUNCTION: BF2 0x6d5150
// 0x6d5150 maya::AwVector::operator(maya::AwMatrix const&)
void* awvector_op(void* dst, void* src)
{
    *(void**)dst = *(void**)((char*)src + 0x60);
    *(void**)((char*)dst + 8) = *(void**)((char*)src + 0x68);
    *(void**)((char*)dst + 16) = *(void**)((char*)src + 0x70);
    return dst;
}
