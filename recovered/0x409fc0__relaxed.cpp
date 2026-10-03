// FUNCTION: BF2 0x409fc0
extern "C" void Mutex_lock(int*);
extern "C" void Mutex_unlock(int*);

namespace dice { namespace hfe { namespace memory {

class MemoryHistogram {
public:
    static void clearCurrent();
};

void MemoryHistogram::clearCurrent() {
    Mutex_lock(reinterpret_cast<int*>(0xf814f8));
    unsigned long long i = 0;
    do {
        reinterpret_cast<unsigned int(*)[2]>(0xf6dc60)[static_cast<unsigned int>(i)][0] = 0;
        i = i + 1;
    } while (i != 10000);
    Mutex_unlock(reinterpret_cast<int*>(0xf814f8));
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_MemoryHistogram_clearCurrent (0x40a040)