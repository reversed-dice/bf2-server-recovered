// FUNCTION: BF2 0x6ff7b0
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
    virtual void v23();
    virtual void v24();
    virtual void setSeaWaterLevel(float level);
};

class HeightMapCluster_ {
public:
    void setSeaWaterLevel(float level);

private:
    char m_pad0[0x28];          // 0x00
    int m_28;                   // 0x28
    char m_pad1[0x4];           // 0x2c
    HeightmapCluster** m_30;    // 0x30
};

void HeightMapCluster_::setSeaWaterLevel(float level) {
    for (int i = 0; i < m_28 * m_28; ++i) {
        m_30[i]->setSeaWaterLevel(level);
    }
}

}}}
