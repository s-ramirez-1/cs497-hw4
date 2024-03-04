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
#include <plx/expr/If.hpp>

namespace PLX {

    If::If(Object* cond, Object* conseq, Object* alt)
        : _cond(cond), _conseq(conseq), _alt(alt)
    {}

    Object* If::eval(Evaluator* etor) {
        Object* condValue = _cond->eval(etor);
    
        if (condValue->boolValue()) {
            return _conseq->eval(etor);
        } else {
            return _alt->eval(etor);
        }
    }


    TypeId If::typeId() const {
        return TypeId::E_IF;
    }

    void If::showOn(std::ostream& os) const {
        os << "if " << _cond->toString() << " then " << _conseq->toString() << " else " << _alt->toString();
    }

}
