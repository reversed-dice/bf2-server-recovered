// FUNCTION: BF2 0x7a5a80
namespace dice { namespace hfe { namespace io {

enum SeekOrigin { SeekBegin, SeekCurrent, SeekEnd };

bool calcSeek(SeekOrigin origin, int offset, unsigned int size, unsigned int& pos)
{
    if (origin == SeekBegin) {
        if (offset < 0 || size < (unsigned int)offset)
            return false;
        pos = offset;
        return true;
    } else if (origin == SeekEnd) {
        if (offset > 0 || size < (unsigned int)-offset)
            return false;
        pos = size - offset;
        return true;
    } else if (origin == SeekCurrent) {
        offset += pos;
        if (offset < 0 || (unsigned int)offset > size)
            return false;
        pos = offset;
        return true;
    }
    return false;
}

} } }
