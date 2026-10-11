// FUNCTION: BF2 0x73f8d0
namespace dice { namespace hfe {

class Profiler {
public:
    struct Timer {
        void* pad0;
        void* pad8;
        unsigned long long pad10;
        void* pad18;
        void* pad20;
        int pad28;
        int pad2c;
        int pad30;
        int pad34;
        int pad38;
        int pad3c;
        char pad40[0x18];
        int pad58;
        int pad5c;
        int pad60;
        int pad64;
        char pad68[0x10];
        Timer* children[512];

        void clear();
    };
};

void Profiler::Timer::clear() {
    pad3c = 0;
    pad8 = 0;
    pad2c = 0;
    pad10 = 0xffffffffULL;
    pad18 = 0;
    pad20 = 0;
    pad28 = 0;
    pad58 = 0;
    pad5c = 0;
    pad60 = 0;
    pad64 = 0;
    for (int i = 0; i < 512; ++i) {
        if (children[i]) {
            children[i]->clear();
        }
    }
}

} }
