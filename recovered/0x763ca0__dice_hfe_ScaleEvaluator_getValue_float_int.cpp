// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x763ca0
namespace dice { namespace hfe {

class ISoundEvaluator {
public:
    virtual float getValue(float x, int i) = 0;
};

class ISoundSource {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual ISoundEvaluator* getEvaluator();
};

class ISoundObject {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual ISoundSource* getSource();
};

class ScaleEvaluator : public ISoundEvaluator {
public:
    virtual float getValue(float x, int i);
    ISoundObject* m_object;
    float m_scale;
};

float ScaleEvaluator::getValue(float x, int i)
{
    ISoundEvaluator* e = m_object->getSource()->getEvaluator();
    if (m_object && e)
        return m_scale * e->getValue(x, i);
    return m_scale;
}

} }
