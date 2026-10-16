// FUNCTION: BF2 0x73f950
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
        float pad34;
        int pad38;
        int pad3c;
        char pad40[0x18];
        int pad58;
        int pad5c;
        int pad60;
        int pad64;
        char pad68[0x8];
        int pad70;
        Timer* children[512];

        Timer(unsigned int, float);
        void clear();
    };
};

Profiler::Timer::Timer(unsigned int id, float f) {
    pad34 = f;
    pad0 = 0;
    pad10 = 0xffffffffULL;
    pad8 = 0;
    pad18 = 0;
    pad20 = 0;
    pad28 = 0;
    pad2c = 0;
    pad30 = (int)id;
    pad38 = 0;
    pad3c = 0;
    pad70 = 0x41200000;
    for (int i = 0; i < 512; ++i) children[i] = 0;
    clear();
}

} }
