// FUNCTION: BF2 0x40a620
namespace dice { namespace hfe { namespace memory {

int compareResources(const void* a, const void* b)
{
    unsigned int x = *(const unsigned int*)a;
    unsigned int y = *(const unsigned int*)b;
    if (x == y)
        return 0;
    return x < y ? 1 : -1;
}

} } }
