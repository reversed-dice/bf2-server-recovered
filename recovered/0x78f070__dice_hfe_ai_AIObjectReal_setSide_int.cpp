// FUNCTION: BF2 0x78f070
typedef void (*c18)(void*, int);
typedef void (*c68)(void*, void*);
typedef void (*vn178)(void*, int);
typedef void (*vn158)(void*, int, int);
typedef bool (*vn148)(void*, int);
typedef void* (*vn130)(void*);
typedef void (*vnxc8)(void*, double);

extern "C" void* g_courier_78f070;

extern "C" void setSide_78f070(void* self, int side)
{
    int old = *(int*)((char*)self + 0x14);
    if (old == side) return;
    int e;
    ((c18)(*(void***)g_courier_78f070)[0x18/8])(g_courier_78f070,
        *(int*)((char*)self + (long)old * 4 + 0x64));
    ((c68)(*(void***)g_courier_78f070)[0x68/8])(g_courier_78f070, self);
    if (!old) {
        e = (side == 1) + 1;
        ((vn178)(*(void***)self)[0x178/8])(self, e);
        *(int*)((char*)self + 0x14) = side;
        if (!((vn148)(*(void***)self)[0x148/8])(self, 0x15)) {
            ((vn158)(*(void***)self)[0x158/8])(self, e, 1);
        } else {
            ((vn158)(*(void***)self)[0x158/8])(self, side, 1);
            *(char*)((char*)self + 0x18) = 1;
        }
    } else {
        if (side) {
            e = (side == 1) + 1;
            ((vn178)(*(void***)self)[0x178/8])(self, e);
            ((vn178)(*(void***)self)[0x178/8])(self, side);
            *(int*)((char*)self + 0x14) = side;
            ((vn158)(*(void***)self)[0x158/8])(self, side, 1);
        } else {
            e = (*(int*)((char*)self + 0x14) == 1) + 1;
            ((vn178)(*(void***)self)[0x178/8])(self, e);
            *(int*)((char*)self + 0x14) = 0;
        }
        ((vn158)(*(void***)self)[0x158/8])(self, e, 1);
        *(char*)((char*)self + 0x18) = 1;
    }
    ((c68)(*(void***)g_courier_78f070)[0x68/8])(g_courier_78f070, 0);
    void* p = ((vn130)(*(void***)self)[0x130/8])(self);
    if (p) {
        ((vnxc8)(*(void***)p)[0xc8/8])(p, -1000.0);
    }
}
