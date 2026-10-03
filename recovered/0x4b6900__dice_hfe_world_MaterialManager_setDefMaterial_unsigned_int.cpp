// FUNCTION: BF2 0x4b6900
// 0x4b6900 MaterialManager::setDefMaterial
extern "C" void abort(void);

void setDefMaterial(void* self, unsigned int idx)
{
    if (idx > 0x270f) {
        abort();
    }
    *(unsigned int*)((char*)self + 0x44) = idx;
}
