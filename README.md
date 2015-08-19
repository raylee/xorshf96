# xorshf96.c

This is a Marsaglia xorshift generator, implemented with a 3 x 32-bit pool, for a
2^96 period. At the time this hit a sweet spot for period vs speed.

### Usage

Don't.

This is here just for historical purposes. Nowadays a 2 x 64 bit xor shift generator
has a longer period for fewer clock cycles, not to mention many other options.
