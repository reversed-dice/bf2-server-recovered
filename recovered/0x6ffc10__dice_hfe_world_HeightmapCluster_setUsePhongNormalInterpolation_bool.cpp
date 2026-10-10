// FUNCTION: BF2 0x6ffc10
namespace dice { namespace hfe { namespace world {

class HeightmapCluster {
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
    virtual void setUsePhongNormalInterpolation(bool on);
};

class HeightMapCluster_ {
public:
    void setUsePhongNormalInterpolation(bool on);

private:
    char m_pad0[0x28];          // 0x00
    int m_28;                   // 0x28
    char m_pad1[0x4];           // 0x2c
    HeightmapCluster** m_30;    // 0x30
    char m_pad2[0x4];           // 0x38
    bool m_3c;                  // 0x3c
};

void HeightMapCluster_::setUsePhongNormalInterpolation(bool on) {
    m_3c = on;
    for (int i = 0; i < m_28 * m_28; ++i) {
        if (m_30[i]) {
            m_30[i]->setUsePhongNormalInterpolation(on);
        }
    }
}

}}}
