extern "C" void fn_79e920(void*, void*, int);

extern "C" int DropVehicleEvent_deSerialize_425460(void* self, void* stream)
{
    fn_79e920(stream, (char*)self + 0x10, 0x20);
    fn_79e920(stream, (char*)self + 0x14, 0x20);
    fn_79e920(stream, (char*)self + 0x18, 0x8);
    int tmp = 0;
    fn_79e920(stream, &tmp, 1);
    *(char*)((char*)self + 0x19) = tmp == 1;
    int r = 1;
    if (*(char*)((char*)stream + 0x20)) {
        *(int*)((char*)stream + 0x24) = 0;
        *(char*)((char*)stream + 0x20) = 0;
        r = 0;
    }
    return r;
}
