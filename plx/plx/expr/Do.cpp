#include <plx/data/Array.hpp>
#include <plx/data/HashTable.hpp>
#include <plx/data/List.hpp>
#include <plx/data/Triple.hpp>
#include <plx/evaluator/Evaluator.hpp>
#include <plx/literal/Nil.hpp>
#include <plx/literal/String.hpp>
#include <plx/object/Globals.hpp>
#include <plx/object/Object.hpp>
#include <plx/object/TypeIds.hpp>
#include <plx/expr/Do.hpp>

namespace PLX {

    Do::Do(List* exprs) : _exprs(exprs) {}

    Object* Do::eval(Evaluator* etor) {
        if (_exprs->isEmpty()) {
            return GLOBALS->NilObject();
        }

        Triple* env = etor->environment();
        List* exprs = _exprs;
        Object* last = new Object;

        while (!exprs->isEmpty()) {
            last = etor->evalExpr(exprs->first());
            exprs = exprs->restAsList();
        }

        etor->setEnvironment(env);
        return last;
    }


    TypeId Do::typeId() const {
        return TypeId::E_SEQ;
    }


    void Do::showOn(std::ostream& os) const {
        List* exprs = _exprs;
        
        os << "do ";
        while (!exprs->isEmpty()) {
        os << exprs->first()->toString() + " ";
        exprs = exprs->restAsList();

        }
        os << "end";
    }
}
