// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#include "host/host_example_counter/counterfunc.h"

namespace WasmEdge {
namespace Host {

WasmEdge::Expect<void> CounterFuncClick::body(
    [[maybe_unused]] Runtime::Instance::MemoryInstance *MemInst) {
  Env.already_count += 1;
  return {};
}

WasmEdge::Expect<uint32_t> CounterFuncGetCount::body(
    [[maybe_unused]] Runtime::Instance::MemoryInstance *MemInst) {
  return Env.already_count;
}

WasmEdge::Expect<void> CounterFuncForwardBy::body(
    [[maybe_unused]] Runtime::Instance::MemoryInstance *MemInst, uint32_t
        increment) {
  // for(int i=0;i < increment; i++){
  // }
  Env.already_count += increment;
  return {};
}

} // namespace Host
} // namespace WasmEdge
