#include <ATen/ATen.h>

namespace at {
namespace native {
Tensor& rivergold_test_out(Tensor& result, const Tensor& base) {
  return result;
}

Tensor rivergold_test(const Tensor& base){
  Tensor result = at::empty_like(base);
  return native::rivergold_test_out(result, base);
}

} // namespace native
} // namespace at
