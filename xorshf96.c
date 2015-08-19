
static unsigned long xorshf96(void) {    /* A George Marsaglia generator, period 2^96-1 */
	static unsigned long x=123456789, y=362436069, z=521288629;
	unsigned long t;

	x ^= x << 16;
	x ^= x >> 5;
	x ^= x << 1;

	t = x;
	x = y;
	y = z;

	z = t ^ x ^ y;
	return z;
}

inline unsigned long random(void) {
	return xorshf96();
}

inline float ranf(void) {
	return (float) random() / (float) (~0UL);
}

inline float ranfu(void) {
	return (float) random()/((~0UL>>1)*1.0) - 1.0;
}

int main(void) {
        unsigned i, quantity=100e6;
        float f;
 
        for (i=quantity/2; i; i--) {
                xorshf96();
                xorshf96();
        }
        for (i=0; i<20; i++) {
                printf("%21.018lf\n", xorshf96()/((~0UL>>1)*1.0) - 1.0);
        }
 
        return 0;
}

