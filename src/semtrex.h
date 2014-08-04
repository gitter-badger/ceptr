#ifndef _CEPTR_SEMTREX_H
#define _CEPTR_SEMTREX_H

#include "tree.h"

enum {StateSymbol,StateAny,StateSplit,StateMatch,StateGroup};
typedef int StateType;

enum {TransitionNextChild=0,TransitionUp=-1,TransitionDown=1};
typedef int TransitionType;

#define GroupOpen 0x1000
#define GroupClose 0

struct SState {
    StateType type;
    Symbol symbol;
    struct SState *out;
    TransitionType transition;
    struct SState *out1;
    int lastlist;
    int id;
};
typedef struct SState SState;

SState * _s_makeFA(Tnode *s,int *statesP);
void _s_freeFA(SState *s);
int _t_match(Tnode *semtrex,Tnode *t);
int _t_matchr(Tnode *semtrex,Tnode *t,Tnode **r);

#endif