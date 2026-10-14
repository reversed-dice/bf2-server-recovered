// FUNCTION: BF2 0x40a000
extern "C" void Mutex_lock(int*);
extern "C" void Mutex_unlock(int*);

namespace dice { namespace hfe { namespace memory {

class MemoryHistogram {
public:
    static void setPeakToCurrent();
};

void MemoryHistogram::setPeakToCurrent() {
    Mutex_lock(reinterpret_cast<int*>(0xf814f8));
    unsigned long long i = 0;
    do {
        unsigned long long off = (unsigned long long)(unsigned int)i * 8;
        *reinterpret_cast<unsigned int*>(0xf6dc60 + off) = *reinterpret_cast<unsigned int*>(0xf6dc64 + off);
        i = i + 1;
    } while (i != 10000);
    Mutex_unlock(reinterpret_cast<int*>(0xf814f8));
}

} } }
