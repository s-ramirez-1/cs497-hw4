#pragma once
#include <plx/object/Object.hpp>

namespace PLX {

    class Evaluator;
    class Triple;

    class Quote : public Object {

    public:
        Quote(Object* expression);

        // Overridden functions --------------------------------------------
        Object* eval(Evaluator* etor) override;
        TypeId typeId() const override;
        void showOn(std::ostream& os) const override;
        
    private:
        Object* _expression;
    };

}