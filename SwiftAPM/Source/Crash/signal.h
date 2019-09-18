//
//  signal.h
//  SwiftAPM
//
//  Created by yans on 2019/9/3.
//

#include <sys/signal.h>
#include <stdbool.h>
 
/// 判断 sigaction 是否有 sa_sigaction
bool has_sa_sigaction(struct sigaction action);
