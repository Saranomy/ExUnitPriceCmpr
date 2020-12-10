// calculate price when buying in 1 unit
float unit_p(float price, long quantity);

// return 1 if unit price of the first one is cheaper
// -1 if more expensive, or 0 if same
int cmpr(float price1, long quantity1, float price2, long quantity2);

// same as cmpr, but comparing between 2 unit prices
int cmpr_u(float unit_p1, float unit_p2);
