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
#include <plx/expr/LetIn.hpp>

namespace PLX {

    LetIn::LetIn(Triple* bindings, Object* body): _bindings(bindings),_body(body) {}
    
    Object* LetIn::eval(Evaluator* etor) {
        Triple* Bindings = _bindings;
        Object* body = _body;
        Triple* env = etor->environment();
        Object* last = new Object;

        while (!Bindings->isEmpty()) {
            Object* val = Bindings->value();
            val = etor->evalExpr(val);
            last = val;
            Object* key = Bindings->key();
            etor->bind(key, val);
            Bindings = Bindings->next();
        }

        etor->evalExpr(body);
        etor->setEnvironment(env);
        return last;
    }
        

    TypeId LetIn::typeId() const {
        return TypeId::E_LETIN;
    }

    void LetIn::showOn(std::ostream& os) const {
        os << "let ";
        Triple* bClone = _bindings;
        
        while (!bClone->isEmpty()) {
            os << bClone->key()->toString() << "=" << bClone->value()->toString();
            if (!bClone->next()->isEmpty()) {
                os << ", ";
            }
            bClone = bClone->next();
        }
        
        os << " in " <<_body->toString();
    }
}
