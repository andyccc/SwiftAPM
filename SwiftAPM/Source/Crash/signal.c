//
//  signal.c
//  SwiftAPM
//
//  Created by yans on 2019/9/3.
//

#include "signal.h"

/// 判断 sigaction 是否有 sa_sigaction
bool has_sa_sigaction(struct sigaction action) {
    if (action.sa_sigaction) {
        return true;
    }
    else {
        return false;
    }
}
