#pragma once
#include <plx/object/Object.hpp>

namespace PLX {

    class Evaluator;
    class Triple;

    class Let : public Object {
    public:
        Let(Triple* bindings);

        // Overridden functions --------------------------------------------
        Object* eval(Evaluator* etor) override;
        TypeId typeId() const override;
        void showOn(std::ostream& os) const override;

    private:
        Triple* _bindings;
    };
}