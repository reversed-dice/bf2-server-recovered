// FUNCTION: BF2 0x44f760
namespace dice { namespace hfe {

class Thread {
public:
    Thread();
};

class AutoRecorderHookThread_AutoRecorderHookThread : public Thread {
public:
    AutoRecorderHookThread_AutoRecorderHookThread();
};

AutoRecorderHookThread_AutoRecorderHookThread::AutoRecorderHookThread_AutoRecorderHookThread() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb30070);
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x10) = 0;
    *reinterpret_cast<unsigned long long*>(reinterpret_cast<char*>(this) + 0x18) = 0xf6c6e8ULL;
    *reinterpret_cast<unsigned long long*>(reinterpret_cast<char*>(this) + 0x20) = 0xf6c6e8ULL;
    *reinterpret_cast<unsigned long long*>(reinterpret_cast<char*>(this) + 0x28) = 0;
    *reinterpret_cast<unsigned long long*>(reinterpret_cast<char*>(this) + 0x30) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x38) = 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_AutoRecorderHookThread_AutoRecorderHookThread (0x44f760)