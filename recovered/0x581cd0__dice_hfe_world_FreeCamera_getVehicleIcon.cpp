// FUNCTION: BF2 0x581cd0
// 0x581cd0 FreeCamera::getVehicleIcon
extern "C" void string_copy(void*, void*);

void* getVehicleIcon(void* dst, void* self)
{
    void* src = (char*)self + 0x290;
    string_copy(dst, src);
    return dst;
}
