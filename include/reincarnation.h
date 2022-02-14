#ifndef GUARD_RECINARNATION_H
#define GUARD_RECINARNATION_H

#include "global.h"
#include "pokemon.h"


void ReincarnateBoxPokemon
(
    struct BoxPokemon *mon, const struct BoxPokemon *donors[2],
    u16 emblem, u16 support
);

void ReincarnatePokemon
(
    struct Pokemon *mon, const struct Pokemon *donors[2],
    u16 emblem, u16 support
);


#endif // GUARD_RECINARNATION_H
