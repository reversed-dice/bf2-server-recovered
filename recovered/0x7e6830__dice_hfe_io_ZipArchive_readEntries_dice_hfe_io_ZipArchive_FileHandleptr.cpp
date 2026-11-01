// FUNCTION: BF2 0x7e6830
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <utility>
#include <string.h>

typedef unsigned long uLong;
typedef unsigned int uInt;

struct tm_unz {
    uInt tm_sec;
    uInt tm_min;
    uInt tm_hour;
    uInt tm_mday;
    uInt tm_mon;
    uInt tm_year;
};

struct unz_global_info {
    uLong number_entry;
    uLong size_comment;
};

struct unz_file_info {
    uLong version;
    uLong version_needed;
    uLong flag;
    uLong compression_method;
    uLong dosDate;
    uLong crc;
    uLong compressed_size;
    uLong uncompressed_size;
    uLong size_filename;
    uLong size_file_extra;
    uLong size_file_comment;
    uLong disk_num_start;
    uLong internal_fa;
    uLong external_fa;
    tm_unz tmu_date;
};

struct unz_file_pos {
    uLong pos_in_zip_directory;
    uLong num_of_file;
};

typedef void* unzFile;

extern "C" {
int unzGetGlobalInfo(unzFile file, unz_global_info* pglobal_info);
int unzGetCurrentFileInfo(unzFile file, unz_file_info* pfile_info, char* szFileName,
                          uLong fileNameBufferSize, void* extraField,
                          uLong extraFieldBufferSize, char* szComment,
                          uLong commentBufferSize);
int unzGoToNextFile(unzFile file);
int unzGoToFirstFile(unzFile file);
int unzGetFilePos(unzFile file, unz_file_pos* file_pos);
}

namespace dice { namespace hfe {

std::string getLowerCase(const std::string& s);

namespace io {

struct FileHandle {
    unzFile m_file;
};

struct Entry {
    unz_file_info info;
    unz_file_pos pos;
};

class ZipArchive {
public:
    char _pad[0x30];
    std::map<std::string, Entry> m_map;
    bool readEntries(FileHandle* h);
};

bool ZipArchive::readEntries(FileHandle* h)
{
    unz_global_info gi;
    if (unzGetGlobalInfo(h->m_file, &gi) != 0)
        return false;
    for (unsigned int i = 0; i < gi.number_entry; i++) {
        Entry entry;
        memset(&entry, 0, sizeof(entry));
        char name[0x1000];
        if (unzGetCurrentFileInfo(h->m_file, &entry.info, name, 0x1000, 0, 0, 0, 0) != 0)
            return false;
        std::string lower = getLowerCase(std::string(name));
        if (!lower.empty() && lower[lower.size() - 1] != '\\' &&
            lower[lower.size() - 1] != '/') {
            unzGetFilePos(h->m_file, &entry.pos);
            m_map.insert(std::make_pair(lower, Entry(entry)));
        }
        unzGoToNextFile(h->m_file);
    }
    unzGoToFirstFile(h->m_file);
    return true;
}

} } }
