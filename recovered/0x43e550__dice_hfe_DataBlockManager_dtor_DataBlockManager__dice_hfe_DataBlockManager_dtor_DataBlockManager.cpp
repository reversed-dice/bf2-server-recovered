// FUNCTION: BF2 0x43e550
namespace dice { namespace hfe {
    extern "C" void sub_43eea0(void*);
    extern "C" void sub_4085b8(void*);

    class DataBlockManager {
    public:
        ~DataBlockManager();
    };

    DataBlockManager::~DataBlockManager() {
        *(void**)this = (void*)0xb2f690;
        sub_43eea0((char*)this + 8);
        sub_4085b8(this);
    }
}}
// REVERSED_FUNCTION: dice_hfe_DataBlockManager_dtor_DataBlockManager (0x43e550)