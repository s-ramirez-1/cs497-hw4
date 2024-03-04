#pragma once
#include <plx/object/Object.hpp>

namespace PLX {

    class Evaluator;
    class Triple;

    class If : public Object {

    public:
        If(Object* cond, Object* conseq, Object* alt);

        // Overridden functions --------------------------------------------
        Object* eval(Evaluator* etor) override;
        TypeId typeId() const override;
        void showOn(std::ostream& os) const override;
        
    private:
        Object* _cond;
        Object* _conseq;
        Object* _alt;
    };

}