#include "yespowerlitb.h"

int yespowerlitb_hash(const char *input, char *output)
{
	yespowerlitb_params_t params = {
		.version = YESPOWERLITB_1_0,
		.N = 2048,
		.r = 32,
		.pers = "LITBpower: The number of LITB working or available for proof-of-work mining",
		.perslen = 73
  };
	return yespowerlitb_tls(input, 80, &params, (yespowerlitb_binary_t *) output);
}
