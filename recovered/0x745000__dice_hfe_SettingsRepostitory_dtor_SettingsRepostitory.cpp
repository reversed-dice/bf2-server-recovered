// FUNCTION: BF2 0x745000
extern "C" void _ZdlPv(void* p);

struct RbTreeLike {
    void erase(void* root);
};

void dtor_745000(void* self) {
    *(void**)self = (void*)0xb99f90;
    RbTreeLike* t1 = (RbTreeLike*)((char*)self + 0x160);
    t1->erase(*(void**)((char*)t1 + 0x10));
    RbTreeLike* t2 = (RbTreeLike*)((char*)self + 0x128);
    t2->erase(*(void**)((char*)t2 + 0x10));
    RbTreeLike* t3 = (RbTreeLike*)((char*)self + 0xf0);
    t3->erase(*(void**)((char*)t3 + 0x10));
    RbTreeLike* t4 = (RbTreeLike*)((char*)self + 0xb8);
    t4->erase(*(void**)((char*)t4 + 0x10));
    RbTreeLike* t5 = (RbTreeLike*)((char*)self + 0x80);
    t5->erase(*(void**)((char*)t5 + 0x10));
    RbTreeLike* t6 = (RbTreeLike*)((char*)self + 0x48);
    t6->erase(*(void**)((char*)t6 + 0x10));
    RbTreeLike* t7 = (RbTreeLike*)((char*)self + 0x10);
    t7->erase(*(void**)((char*)t7 + 0x10));
    _ZdlPv(self);
}
