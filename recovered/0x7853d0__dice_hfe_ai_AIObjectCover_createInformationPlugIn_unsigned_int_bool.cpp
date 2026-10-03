// FUNCTION: BF2 0x7853d0
namespace dice { namespace hfe { namespace ai {
extern long* BFSingletonServer_m_iInformationFactory;

bool fn_7853d0(long* param_1, unsigned param_2, bool param_3) {
    long* singleton = BFSingletonServer_m_iInformationFactory;
    typedef bool (*Fn2)(long*, unsigned, unsigned, bool);
    Fn2 f2 = (Fn2)(*(void***)singleton)[0x40/8];
    typedef unsigned (*Fn1)(long*);
    Fn1 f1 = (Fn1)(*(void***)param_1)[0x10/8];
    unsigned r = f1(param_1);
    return f2(singleton, param_2, r, param_3);
}
} } }
