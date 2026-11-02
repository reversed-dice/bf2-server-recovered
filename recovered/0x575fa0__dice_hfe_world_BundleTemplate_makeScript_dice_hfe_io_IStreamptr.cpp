// FUNCTION: BF2 0x575fa0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <sstream>
#include <ostream>
#include <string>
#include <vector>

namespace dice { namespace hfe {

namespace io {

class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

}

namespace world {

class SimpleObjectTemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    bool makeScript(dice::hfe::io::IStream* stream);
    char _pad8[0x1d0];
};

class BundleTemplate : public SimpleObjectTemplate {
public:
    struct TemplateInfo;
    virtual void makeMemberScript(TemplateInfo const* info, dice::hfe::io::IStream* stream);
    bool makeScript(dice::hfe::io::IStream* stream);

    std::vector<TemplateInfo*> m_templates;     // 0x1d8
};

bool BundleTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!SimpleObjectTemplate::makeScript(stream))
        return false;

    bool hasTemplates = m_templates.begin() != m_templates.end();
    std::ostringstream ss;
    ss << "rem -------------------------------------" << std::endl;
    std::string s = ss.str();
    if (hasTemplates)
        stream->write(s.c_str(), s.length());
    for (std::vector<TemplateInfo*>::iterator it = m_templates.begin(); it != m_templates.end(); ++it)
        makeMemberScript(*it, stream);
    if (hasTemplates)
        stream->write(s.c_str(), s.length());
    return true;
}

} } }
