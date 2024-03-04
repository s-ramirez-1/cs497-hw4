#pragma once
#include <plx/object/Object.hpp>

namespace PLX {

    class Evaluator;
    class Triple;

    class Do : public Object {
    
    public:
        Do(List* exprs);

        // Overridden functions --------------------------------------------
        Object* eval(Evaluator* etor) override;
        TypeId typeId() const override;
        void showOn(std::ostream& os) const override;


    private:
        List* _exprs;
    };


}