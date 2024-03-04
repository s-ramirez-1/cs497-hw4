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
#include <plx/expr/Let.hpp>

namespace PLX {

    Let::Let(Triple* bindings) : _bindings(bindings) {}
    
    Object* Let::eval(Evaluator* etor) {
        Triple* bClone = _bindings;
        Object* eval;
        while(!bClone->isEmpty()){
            eval = etor->evalExpr(bClone->value());
            etor->bind(bClone->key(), eval);
            bClone = bClone ->next();
        }
        return GLOBALS->NilObject();      
    }
        

    TypeId Let::typeId() const {
        return TypeId::E_LET;
    }

    void Let::showOn(std::ostream& os) const {
        Triple* bClone = _bindings;
        os << "let ";
        while (!bClone->isEmpty()) {
            os << bClone->key() << "=" << bClone->value()->toString();
            if (!bClone->next()->isEmpty()) {
                os << ", ";
            }
            bClone = bClone->next();
        }
    }
}
