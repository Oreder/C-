#pragma once

///
/// Product's structure
///
typedef struct _TProduct TProduct;
struct _TProduct
{
	char Product[128];
	int cost;
	int amount;
	int year;
};
