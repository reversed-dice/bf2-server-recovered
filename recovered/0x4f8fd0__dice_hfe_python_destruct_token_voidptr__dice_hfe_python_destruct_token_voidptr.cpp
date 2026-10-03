// FUNCTION: BF2 0x4f8fd0
namespace dice { namespace hfe { namespace python {

void destruct_token(void* p)
{
    if (p == 0)
        return;

    void** pp = (void**)p;
    int* rc = (int*)*pp;

    if (rc != 0) {
        int n = *rc;
        n--;
        *rc = n;
        if (n == 0) {
            ::operator delete(rc);
            ::operator delete(p);
            return;
        }
    }

    ::operator delete(p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_python_destruct_token_voidptr (0x4f8fd0)