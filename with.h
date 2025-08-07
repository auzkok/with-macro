#ifndef WITH_H_INCLUDED
#define WITH_H_INCLUDED

#define WITH(init, deinit) char with_cond_##__LINE__ = 1; for ((init); with_cond_##__LINE__; with_cond_##__LINE__ = 0, (deinit))

#endif // WITH_H_INCLUDED