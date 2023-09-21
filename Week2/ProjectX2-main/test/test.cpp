#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>

FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
}

FUZZ_TEST(const uint8_t *data, size_t size) {
  int num1 = fuzzed_data.ConsumeIntegral<int8_t>();
  int num2 = fuzzed_data.ConsumeIntegral<int8_t>();
  char op = fuzzed_data.ConsumeIntegral<int8_t>();
  // int my_int = fuzzed_data.ConsumeIntegral<int8_t>();
  // std::string my_string = fuzzed_data.ConsumeRandomLengthString();

  // Call the functions you want to test with the provided data and optionally
  // assert that the results are as expected:
  //
  // int res = DoSomething(my_int, my_string);
  int res = calculator(num1, op, num2);
  assert(res != -1);
  /*Your code here*/
}
