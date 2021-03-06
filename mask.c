#include "mask.h"



/*
 * Mask for 1 bit bases
 */

uint8_t __MASK_SSE_BEG1_ [128] __aligned__ = { 0xfe, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff };

uint8_t __MASK_SSE_BEG11_ [128] __aligned__ = { 0xfc, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
	0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x00, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xc0, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
	0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff };

uint8_t __MASK_SSE_END1_ [SSE_BIT_LENGTH * SSE_BYTE_NUM / BASE_SIZE1] = {

#define BOOST_PP_ITERATION_LIMITS	(0, SSE_BIT_LENGTH - 1)
#define BOOST_PP_FILENAME_1			"1masks.hpp" // this file
#include BOOST_PP_ITERATE()

};

#undef BOOST_PP_ITERATION_LIMITS
#undef BOOST_PP_FILENAME_1

///*
// * Mask for 2 bit bases
// */

uint8_t __MASK_SSE_END11_ [SSE_BIT_LENGTH * SSE_BYTE_NUM / BASE_SIZE11] = {

#define BOOST_PP_ITERATION_LIMITS	(0, SSE_BIT_LENGTH / 2  - 1)
#define BOOST_PP_FILENAME_1			"11masks.hpp" // this file
#include BOOST_PP_ITERATE()

};

uint8_t __MASK_0F_[16] __aligned__ = { 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf,
			0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf };

uint8_t __MASK_7F_[16] __aligned__ = { 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,
			0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f };

uint8_t __MASK_0TO1_[16] __aligned__ = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x07,
		0x06, 0x07, 0x08, 0x0f, 0x0e, 0x0f, 0x0c, 0x0f, 0x0e, 0x0f };

uint8_t* MASK_SSE_END1 = __MASK_SSE_END1_;
uint8_t* MASK_SSE_END11 = __MASK_SSE_END11_;
uint8_t* MASK_SSE_BEG1 = __MASK_SSE_BEG1_;
uint8_t* MASK_SSE_BEG11 = __MASK_SSE_BEG11_;
uint8_t* MASK_0F = __MASK_0F_;
uint8_t* MASK_7F = __MASK_7F_;
uint8_t* MASK_0TO1 = __MASK_0TO1_;
