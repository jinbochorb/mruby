#include "mruby.h"

#include <stdlib.h>
#include <time.h>

mrb_value
mrb_f_rand(mrb_state *mrb, mrb_value self)
{
  return mrb_fixnum_value(rand());
}

void
mrb_mruby_rand_gem_init(mrb_state *mrb)
{
  struct RClass *krn = mrb->kernel_module;
  mrb_define_method(mrb, krn, "rand", mrb_f_rand, ARGS_ANY());
  srand((unsigned) time(NULL));
}

void
mrb_mruby_rand_gem_final(mrb_state *mrb)
{
}
