#pragma once

#ifdef _
#define _OLD_UNDERSCORE _
#endif

#ifndef MORSE_TICK
#define MORSE_TICK 50
#endif

#define _ MORSE_TICK
#define ___ (MORSE_TICK * 3)
#define IGAP (MORSE_TICK)
#define SGAP (MORSE_TICK * 3)
#define MGAP (MORSE_TICK * 7)

#define DEFINE_MORSE(symbol, ...) uint32_t MORSE_##symbol[] = { __VA_ARGS__ }
#define MORSE_OF(symbol) MORSE_##symbol

DEFINE_MORSE(A, _, ___);
DEFINE_MORSE(B, ___, _, _, _);
DEFINE_MORSE(C, ___, _, ___, _);
DEFINE_MORSE(D, ___, _, _);
DEFINE_MORSE(E, _);
DEFINE_MORSE(F, _, _, ___, _);
DEFINE_MORSE(G, ___, ___, _);
DEFINE_MORSE(H, _, _, _, _);
DEFINE_MORSE(I, _, _);
DEFINE_MORSE(J, _, ___, ___, ___);
DEFINE_MORSE(K, ___, _, ___);
DEFINE_MORSE(L, _, ___, _, _);
DEFINE_MORSE(M, ___, ___);
DEFINE_MORSE(N, ___, _);
DEFINE_MORSE(O, ___, ___, ___);
DEFINE_MORSE(P, _, ___, ___, _);
DEFINE_MORSE(Q, ___, ___, _, ___);
DEFINE_MORSE(R, _, ___, _);
DEFINE_MORSE(S, _, _, _);
DEFINE_MORSE(T, ___);
DEFINE_MORSE(U, _, _, ___);
DEFINE_MORSE(V, _, _, _, ___);
DEFINE_MORSE(W, _, ___, ___);
DEFINE_MORSE(X, ___, _, _, ___);
DEFINE_MORSE(Y, ___, _, ___, ___);
DEFINE_MORSE(Z, ___, ___, _, _);

DEFINE_MORSE(1, _, ___, ___, ___, ___);
DEFINE_MORSE(2, _, _, ___, ___, ___);
DEFINE_MORSE(3, _, _, _, ___, ___);
DEFINE_MORSE(4, _, _, _, _, ___);
DEFINE_MORSE(5, _, _, _, _, _);
DEFINE_MORSE(6, ___, _, _, _, _);
DEFINE_MORSE(7, ___, ___, _, _, _);
DEFINE_MORSE(8, ___, ___, ___, _, _);
DEFINE_MORSE(9, ___, ___, ___, ___, _);
DEFINE_MORSE(0, ___, ___, ___, ___, ___);

#ifdef _OLDER_UNDERSCORE
#define _ _OLDER_UNDERSCORE
#undef _OLDER_UNDERSCORE
#endif

