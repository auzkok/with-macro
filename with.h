#ifndef WITH_H_INCLUDED
#define WITH_H_INCLUDED

#define WITH(before, after) for (int w_o_ = 1, w_i_ = 1; w_o_; w_o_ = 0) for (before; w_i_; w_i_ = 0, (after))

#endif // WITH_H_INCLUDED
