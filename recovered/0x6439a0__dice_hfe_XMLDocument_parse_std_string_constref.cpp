// FUNCTION: BF2 0x6439a0
#include <string>
#include <string.h>

class TiXmlElement;
struct TiXmlParsingData;
enum TiXmlEncoding { TIXML_ENCODING_UNKNOWN, TIXML_ENCODING_UTF8, TIXML_ENCODING_LEGACY };

class TiXmlString {
public:
    TiXmlString() : cstring(0), allocated(0), current_length(0) {}
    ~TiXmlString() { empty_it(); }
    void empty_it()
    {
        if (cstring)
            delete[] cstring;
        cstring = 0;
        allocated = 0;
        current_length = 0;
    }
    char* cstring;
    unsigned allocated;
    unsigned current_length;
};

struct TiXmlCursor { int row, col; };

class TiXmlBase {
public:
    virtual ~TiXmlBase() {}
    TiXmlCursor location;
    void* userData;
};

class TiXmlNode : public TiXmlBase {
public:
    virtual ~TiXmlNode();
    const TiXmlElement* FirstChildElement() const;
    TiXmlElement* FirstChildElement() { return const_cast<TiXmlElement*>((const_cast<const TiXmlNode*>(this))->FirstChildElement()); }
    TiXmlNode* parent;
    int type;
    TiXmlNode* firstChild;
    TiXmlNode* lastChild;
    TiXmlString value;
    TiXmlNode* prev;
    TiXmlNode* next;
};

class TiXmlDocument : public TiXmlNode {
public:
    TiXmlDocument();
    virtual ~TiXmlDocument() {}
    virtual const char* Parse(const char* p, TiXmlParsingData* data = 0, TiXmlEncoding encoding = TIXML_ENCODING_UNKNOWN);
    bool error;
    int errorId;
    TiXmlString errorDesc;
    int tabsize;
    TiXmlCursor errorLocation;
    bool useMicrosoftBOM;
};

namespace dice { namespace hfe {

namespace io {
class IFile {
public:
    virtual void f0(); virtual void f1();
    virtual void release();                              // 0x10
    virtual void f3();
    virtual unsigned int read(void* buf, unsigned int size);   // 0x20
    virtual void r0();
    virtual void r1();
    virtual void r2();
    virtual void r3();
    virtual void r4();
    virtual void r5();
    virtual void r6();
    virtual void r7();
    virtual void r8();
    virtual unsigned int getSize();                      // 0x70
};
class IFileManager {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual IFile* open(const std::string& name, int mode, int a, int b);   // 0x30
};
extern IFileManager* fileManager;
}

class XMLNode {
public:
    char _pad[8];
};

void parseNode(XMLNode* node, TiXmlNode* xml);

class XMLDocument : public XMLNode {
public:
    bool parse(const std::string& filename);
};

bool XMLDocument::parse(const std::string& filename)
{
    io::IFile* file = io::fileManager->open(filename, 2, 0, 0);
    if (!file)
        return false;
    unsigned int size = file->getSize();
    char* buf = new char[size + 1];
    memset(buf, 0, size + 1);
    file->read(buf, size);
    file->release();
    TiXmlDocument doc;
    doc.Parse(buf);
    delete[] buf;
    bool ok = false;
    if (TiXmlElement* root = doc.FirstChildElement()) {
        ok = true;
        parseNode(this, (TiXmlNode*)root);
    }
    return ok;
}

} }
