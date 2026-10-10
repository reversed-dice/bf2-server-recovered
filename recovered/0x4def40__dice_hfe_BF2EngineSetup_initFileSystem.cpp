// FUNCTION: BF2 0x4def40
namespace dice { namespace hfe {
namespace io {

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
};

class IFileSystem : public IBase {
public:
    virtual void init();
    virtual void isLastFileOpenedFromArchive() const;
    virtual void open();
    virtual void fileExists();
    virtual void deleteFile();
    virtual void moveFile();
    virtual void copyFile();
    virtual void readFile();
    virtual void writeFile();
    virtual void findFiles();
    virtual void getFileInfo();
    virtual void compareFileTime();
    virtual void getFullFileName();
    virtual void update();
    virtual void getHomeSubstitution() const;
    virtual void getRootSubstitution() const;
    virtual void setBaseSystem_dummy();
};

class IArchiveHandler : public IBase {
public:
    virtual void open();
    virtual void getExtensions();
    virtual void canWrite();
};

class FileManager : public IBase {
public:
    virtual void init();
    virtual void s04();
    virtual void s05();
    virtual void s06();
    virtual void s07();
    virtual void s08();
    virtual void s09();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    virtual void s17();
    virtual void s18();
    virtual void setBaseSystem(IFileSystem* fs);                  // slot 20 (+0xa0)
    virtual void openwin32();
    virtual void removeArchiveHandler(IArchiveHandler* ah);
    virtual void addArchiveHandler(IArchiveHandler* ah);          // slot 23 (+0xb8)
};

extern FileManager* fileManager;
extern unsigned CID_UnixFileSystem;
extern unsigned CID_ZipArchiveHandler;

}  // namespace io

struct SmartItfIO {
    dice::hfe::io::IFileSystem* fs;
    void release() { if (fs) fs->release(); }
};
struct SmartItfAH {
    dice::hfe::io::IArchiveHandler* ah;
    void release() { if (ah) ah->release(); }
};

extern "C" bool fn_4dff40(SmartItfIO* out, unsigned cid);
extern "C" bool fn_4dff90(SmartItfAH* out, unsigned cid);

struct BF2EngineSetup {
    char m_pad[0x18];
    bool initFileSystem();
};

bool BF2EngineSetup::initFileSystem() {
    SmartItfIO fs; fs.fs = 0;
    SmartItfAH ah; ah.ah = 0;
    if (fn_4dff40(&fs, dice::hfe::io::CID_UnixFileSystem)) {
        dice::hfe::io::fileManager->setBaseSystem(fs.fs);
    }
    if (fn_4dff90(&ah, dice::hfe::io::CID_ZipArchiveHandler)) {
        dice::hfe::io::fileManager->addArchiveHandler(ah.ah);
    }
    ah.release();
    fs.release();
    return true;
}

} }
