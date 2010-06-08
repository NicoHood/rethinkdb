
#ifndef __REQUEST_HPP__
#define __REQUEST_HPP__

#include "config/args.hpp"

template <class config_t>
struct request {
public:
    typedef typename config_t::btree_fsm_t btree_fsm_t;
    
public:
    request() : nstarted(0), ncompleted(0) {}
    unsigned int nstarted, ncompleted;

    // TODO: make this dynamic
    btree_fsm_t *fsms[MAX_OPS_IN_REQUEST];
};

#endif // __REQUEST_HPP__

