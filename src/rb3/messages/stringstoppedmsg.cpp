#include "Data.h"
#include "Symbol.h"
#include "stringstoppedmsg.hpp"

// fn_80313FB0
Symbol StringStoppedMsg::Type() {
    static Symbol t("string_stopped");
    return t;
}
