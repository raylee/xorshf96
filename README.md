# xorshf96.c

This is a [Marsaglia xorshift generator](http://www.jstatsoft.org/v08/i14/paper
"Xorshift RNGs"), implemented with a 3 x 32-bit pool, for a 2^96 period. At the
time this hit a sweet spot for period vs speed.

### Usage

Don't.

I put this up here only for historical purposes, as it used to be on my personal
site from 2004. Nowadays a 2 x 64 bit xor shift generator has a longer period
for fewer clock cycles. There are also many (arguably better) options than the
xor-shift RNGs as well. The [XOR Shift](https://en.wikipedia.org/wiki/Xorshift)
article at Wikipedia has a short discussion of tradeoffs about this class of
generator.
