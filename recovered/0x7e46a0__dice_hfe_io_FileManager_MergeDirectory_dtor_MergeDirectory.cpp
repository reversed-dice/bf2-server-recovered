// FUNCTION: BF2 0x7e46a0
#include <string>

// dice::hfe::io::FileManager::MergeDirectory::~MergeDirectory() -- 0x7e46a0
//
// Frees the buffer at +8, then the implicit member destruction releases the
// COW string at offset 0.

namespace dice { namespace hfe { namespace io {

struct MergeDirectory_7e46a0 {
    std::string name;
    void* buffer;
    ~MergeDirectory_7e46a0();
};

MergeDirectory_7e46a0::~MergeDirectory_7e46a0()
{
    if (buffer != 0) operator delete(buffer);
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_FileManager_MergeDirectory_dtor_MergeDirectory (0x7e46a0)
