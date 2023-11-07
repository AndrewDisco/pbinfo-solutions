#define CHECK(condition, true_value, false_value) CHECK_##condition(true_value, false_value)

#define CHECK_0(true_value, false_value) false_value
#define CHECK_1(true_value, false_value) true_value